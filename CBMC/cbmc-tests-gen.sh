echo sanghu
BENCHMARK=$1

./cbmc --cover decision $BENCHMARK.c > report-cbmc-$BENCHMARK.txt
sed '0,/Test suite:/d' report-cbmc-$BENCHMARK.txt > tmp1.txt
sed '$,//d' tmp1.txt > tmp2.txt
sed 's/$/,/' tmp2.txt > tmp3.txt
awk '
{ 
    for (i=1; i<=NF; i++)  {
        a[NR,i] = $i
    }
}
NF>p { p = NF }
END {    
    for(j=1; j<=p; j++) {
        str=a[1,j]
        for(i=2; i<=NR; i++){
            str=str" "a[i,j];
        }
        print str
    }
}' tmp3.txt > tmp4.txt
sed 's/\,*=/:/' tmp4.txt > tmp5.txt

#The below code is for Mode1
sed 's/\([a-zA-Z0-9\s_]*[*=]\)//g' tmp3.txt > tmp6.txt
sed 's/,/\t/g' tmp6.txt > $BENCHMARK-cbmc-TCs.txt

#The below code is for Mode2
sed 's/\([a-zA-Z0-9\s_]*[*=]\)//g' tmp5.txt > tmp7.txt
sed -i 's/,$//' tmp7.txt
let z=1;
while read q; do
  echo $z$q >> $BENCHMARK-cbmc-to-pict.txt
  ((z=z+1))
done <tmp7.txt
rm tmp*.txt
