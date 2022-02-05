export BENCHMARK=$1

./cbmc --cover mcdc $BENCHMARK --show-properties > tmp1.txt
#awk '/independence/ {print NR-2 "," NR+2 "d"}' tmp1.txt | sed -f - tmp1.txt > tmp2.txt
sed -i s/independence' 'condition/MCDC/ tmp1.txt
#sed -i 's/decision\/condition/MCDC/' tmp1.txt 
awk '/condition/ {print NR-2 "," NR+2 "d"}' tmp1.txt | sed -f - tmp1.txt > tmp2.txt
awk '/decision/ {print NR-2 "," NR+2 "d"}' tmp2.txt | sed -f - tmp2.txt > tmp4.txt
#cat tmp2.txt | sed s/[\&\&][' '].*[\$\$]/[\&\&][' ']/ > reee.txt
cat tmp4.txt | sed '0,/Running with/d' | sed -e '/Property/d' | sed -e '/MCDC/d'| sed 's/.*line \(.*\)function.*/\1/' | tr -d ' ' | sed '/^$/d' > tmp3.txt
index=''
value=''
while read -r line; do 
  index=$line
  
  read -r line;
#  if [[ $line == "!"* ]]; then 
#	line=$(echo $line | sed s/\(.*[\$\$]/\(/)
#  else
#	line=$(echo $line | sed s/.*[\$\$]//)
#  fi
line=$(echo $line | sed s/calculate_output.*[\$\$]//)
  value="__CPROVER_cover(($line));{printf(\"FOUND at %d \\n \",__LINE__);}"
  if [[ $line == *"tmp_if_expr"* ]]; then 
	value=""
  fi
  value="${arr[$index]}$value"
#  echo $value
  arr[$index]=$value
done < tmp3.txt
for KEY in "${!arr[@]}"; do
  index=$(awk "NR==$KEY" $BENCHMARK)
  echo "$index" >> keyValues.txt
  
  value=${arr[$KEY]} 
  echo $value >> keyValues.txt

done
sed -i -e s/\(signedlongint\)//g -e s/TRUE/\1/g -e s/FALSE/\0/g keyValues.txt
rm tmp*.txt

