export BENCHMARK=$1
export VERSION=$2
export BOUND=$3

mkdir $BENCHMARK-RESULTS
cp Programs/GCOV/$BENCHMARK.c SequenceGenerator/
cp Programs/CBMC/$BENCHMARK.c CBMC/

cd CBMC
./scmcc-cbmc.sh $BENCHMARK $VERSION $BOUND
cd ..

Ares1=$(date +%s.%N)
let dtA=0


cd SequenceGenerator
./seqshell.sh $BENCHMARK.c $VERSION 
mv exp/meta/MetaWithBraces-V$VERSION.c ../CBMC/
cd ..

cd CBMC
gcc -fprofile-arcs -ftest-coverage -g MetaWithBraces-V$VERSION.c

for q in `ls -v ../$BENCHMARK-TC/*`;
do
./a.out < $q >> temp1.txt
done
grep "FOUND" temp1.txt > temp2.txt
sort -u temp2.txt > final_result.txt
rm a.out
feasible=$(grep "FOUND" final_result.txt | wc -l)
total_seq=$(grep "FOUND" MetaWithBraces-V$VERSION.c | wc -l)
echo "***Total no. of feasible SC-MCC sequences = " $feasible >>  $BENCHMARK-score-report.txt
echo "***Total no. of SC-MCC sequences = " $total_seq >>  $BENCHMARK-score-report.txt
((score = (${feasible} * 100) / ${total_seq}))
echo "***SC-MCC Score = " $score >>  $BENCHMARK-score-report.txt

cd ..


Ares2=$(date +%s.%N)
dtA=$(echo "$Ares2 - $Ares1" | bc)
ddA=$(echo "$dtA/86400" | bc)
dtA2=$(echo "$dtA-86400*$ddA" | bc)
dhA=$(echo "$dtA2/3600" | bc)
dtA3=$(echo "$dtA2-3600*$dhA" | bc)
dmA=$(echo "$dtA3/60" | bc)
dsA=$(echo "$dtA3-60*$dmA" | bc)
echo "***Total gSC-MCC runtime in seconds" $dtA >> Time-$BENCHMARK.txt
printf "Total gSC-MCC runtime: %d:%02d:%02d:%02.4f\n" $ddA $dhA $dmA $dsA >> Time-$BENCHMARK.txt



mkdir $BENCHMARK-RESULTS/PredicatesResults
mkdir $BENCHMARK-RESULTS/CBMC
mv SequenceGenerator/exp/meta $BENCHMARK-RESULTS
mv SequenceGenerator/exp/* $BENCHMARK-RESULTS/PredicatesResults
mv SequenceGenerator/$BENCHMARK.c $BENCHMARK-RESULTS/PredicatesResults
mv CBMC/$BENCHMARK-result-SC-MCC-original.txt $BENCHMARK-RESULTS/CBMC
mv CBMC/$BENCHMARK-result-SC-MCC.txt $BENCHMARK-RESULTS/CBMC
mv CBMC/MetaWithBraces-V$VERSION.c $BENCHMARK-RESULTS/CBMC
mv CBMC/$BENCHMARK.c $BENCHMARK-RESULTS/CBMC
mv $BENCHMARK-TC $BENCHMARK-RESULTS
mv Time-$BENCHMARK.txt $BENCHMARK-RESULTS
mv CBMC/$BENCHMARK-score-report.txt $BENCHMARK-RESULTS

rm SequenceGenerator/err.txt
rm CBMC/temp*.txt
rm CBMC/MetaWithBraces*
rm CBMC/final_result*

