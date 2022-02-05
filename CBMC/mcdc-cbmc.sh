
export BENCHMARK=$1
export VERSION=$2
export BOUND=$3

./cbmc --smt2 --beautify --refine-strings --cover mcdc $BENCHMARK.c --unwind $BOUND  > $BENCHMARK-result-MCDC.txt




cp $BENCHMARK-result-MCDC.txt $BENCHMARK-result-MCDC-original.txt
sed -i '0,/Test suite:/d' $BENCHMARK-result-MCDC.txt 
sed -i '/^$/d'  $BENCHMARK-result-MCDC.txt 
cat $BENCHMARK-result-MCDC.txt > temp_testcases.txt
line=$(cat  temp_testcases.txt | head -n 1) 
count=${line//[^,]}
#echo "${#count}"
sed -i '1d' temp_testcases.txt
sed -i -e $'s/,/\\\n/g' $BENCHMARK-result-MCDC.txt 
total_varcount=$((${#count} + 1))
counter=1
testcaseCount=1

mkdir $BENCHMARK-TC
while read -r line; do 
	
	line=$(echo "$line" | sed 's/^[^=]*=//g')
        echo "$line" >> "$BENCHMARK-TC/BT$testcaseCount.txt"
        if [ $(($counter % $total_varcount)) == 0 ]; then
		line=$(cat  temp_testcases.txt | head -n 1) 
		count=${line//[^,]}
		total_varcount=$((${#count} + 1))
		sed -i '1d' temp_testcases.txt
		counter=0
#		echo "$counter"
		testcaseCount=`expr $testcaseCount + 1`
	fi
	counter=`expr $counter + 1`
	
done <  $BENCHMARK-result-MCDC.txt
rm temp_testcases.txt
mv $BENCHMARK-TC ../



