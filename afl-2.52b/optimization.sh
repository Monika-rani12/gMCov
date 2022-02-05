echo sanghu
BENCHMARK=$1
mkdir results-afl-$BENCHMARK/non-cleaned-TCs
mkdir results-afl-$BENCHMARK/cleaned-TCs
rm results-afl-$BENCHMARK/queue/*~
copycount=1;
for f in results-afl-$BENCHMARK/queue/*
do
afl-tmin -i $f -o results-afl-$BENCHMARK/non-cleaned-TCs/Ct$copycount.txt ./$BENCHMARK
copycount=$(($copycount+1)) 
done
find results-afl-$BENCHMARK/non-cleaned-TCs -size  0 -print -delete
rdfind -deleteduplicates true -makeresultsfile false results-afl-$BENCHMARK/non-cleaned-TCs
copycount1=1;
for f1 in results-afl-$BENCHMARK/non-cleaned-TCs/*
do
cp -P $f1 results-afl-$BENCHMARK/cleaned-TCs/Ct$copycount1.txt
copycount1=$(($copycount1+1)) 
done
rm -r results-afl-$BENCHMARK/non-cleaned-TCs

