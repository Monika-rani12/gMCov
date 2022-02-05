BENCHMARK=$1

RAND1=$(( ( RANDOM % 100 )  + 1 ))
rm -r testcase-Random/aseed.txt
echo $RAND1 > testcase-Random/aseed.txt
afl-gcc -fno-stack-protector -z execstack $BENCHMARK.c -o $BENCHMARK
timeout 65 afl-fuzz -i ./testcase-Random/ -o ./results-afl-$BENCHMARK/ ./$BENCHMARK
if [ $? -eq 1 ]; then 
timeout 65 afl-fuzz -C -i ./testcase-Random/ -o ./results-afl-$BENCHMARK/ ./$BENCHMARK
fi
./optimization.sh $BENCHMARK





