export BENCHMARK=$1
export VERSION=$2
export BOUND=$3

mkdir $BENCHMARK-RESULTS
cp Programs/GCOV/$BENCHMARK.c SequenceGenerator/
cp Programs/GCOV/$BENCHMARK.c afl-2.52b/
cp Programs/CBMC/$BENCHMARK.c CBMC/
############################################### AFL Test case generation ###########################################################
Xres1=$(date +%s.%N)
let dtX=0

cd afl-2.52b
./runafl.sh $BENCHMARK
mv results-afl-$BENCHMARK/cleaned-TCs ../
mv results-afl-$BENCHMARK ../
rm $BENCHMARK*
cd ../

Xres2=$(date +%s.%N)
dtX=$(echo "$Xres2 - $Xres1" | bc)
ddX=$(echo "$dtX/86400" | bc)
dtX2=$(echo "$dtX-86400*$ddX" | bc)
dhX=$(echo "$dtX2/3600" | bc)
dtX3=$(echo "$dtX2-3600*$dhX" | bc)
dmX=$(echo "$dtX3/60" | bc)
dsX=$(echo "$dtX3-60*$dmX" | bc)
echo "***Total AFL Test case generation time in seconds" $dtX >>  Time-$BENCHMARK.txt
printf "Total AFL Test case generation time: %d:%02d:%02d:%02.4f\n" $ddX $dhX $dmX $dsX >>  Time-$BENCHMARK.txt
echo "****************AFL Test case generation time Report - End**************************" >>  Time-$BENCHMARK.txt
############################################### CBMC TC generation ###########################################################
Xres1=$(date +%s.%N)
dtX=0
cd CBMC
./mcdc-cbmc.sh $BENCHMARK $VERSION $BOUND
cd ..

Xres2=$(date +%s.%N)
dtX=$(echo "$Xres2 - $Xres1" | bc)
ddX=$(echo "$dtX/86400" | bc)
dtX2=$(echo "$dtX-86400*$ddX" | bc)
dhX=$(echo "$dtX2/3600" | bc)
dtX3=$(echo "$dtX2-3600*$dhX" | bc)
dmX=$(echo "$dtX3/60" | bc)
dsX=$(echo "$dtX3-60*$dmX" | bc)
echo "***Total CBMC TC generation time in seconds" $dtX >>  Time-$BENCHMARK.txt
printf "Total CBMC TC generation time: %d:%02d:%02d:%02.4f\n" $ddX $dhX $dmX $dsX >>  Time-$BENCHMARK.txt
echo "****************CBMC TC generation time Report - End**************************" >>  Time-$BENCHMARK.txt
############################################### MCDC Meta Program generation ###########################################################
Xres1=$(date +%s.%N)
dtX=0

cd CBMC
./PartialMetaProg.sh $BENCHMARK.c
mv keyValues.txt ../SequenceGenerator/
cd ..

cd SequenceGenerator
./seqshell-mcdc.sh $BENCHMARK.c $VERSION 
mv exp/meta/MetaWithBraces-V$VERSION.c ../CBMC/
cd ..

Xres2=$(date +%s.%N)
dtX=$(echo "$Xres2 - $Xres1" | bc)
ddX=$(echo "$dtX/86400" | bc)
dtX2=$(echo "$dtX-86400*$ddX" | bc)
dhX=$(echo "$dtX2/3600" | bc)
dtX3=$(echo "$dtX2-3600*$dhX" | bc)
dmX=$(echo "$dtX3/60" | bc)
dsX=$(echo "$dtX3-60*$dmX" | bc)
echo "***Total MCDC Meta Program generation time in seconds" $dtX >>  Time-$BENCHMARK.txt
printf "Total MCDC Meta Program generation time: %d:%02d:%02d:%02.4f\n" $ddX $dhX $dmX $dsX >>  Time-$BENCHMARK.txt
echo "****************MCDC Meta Program generation time Report - End**************************" >>  Time-$BENCHMARK.txt
############################################### gProfiler - AFL - MCDC ###########################################################

cd CBMC
Ares1=$(date +%s.%N)
let dtA=0

gcc -fprofile-arcs -ftest-coverage -g MetaWithBraces-V$VERSION.c

for q in `ls -v ../cleaned-TCs/*`;
do
./a.out < $q >> temp1.txt
done
grep "FOUND" temp1.txt > temp2.txt
sort -u temp2.txt > final_result-gMCDC-AFL.txt
rm a.out
feasible=$(grep "FOUND" final_result-gMCDC-AFL.txt | wc -l)
total_seq=$(grep "FOUND" MetaWithBraces-V$VERSION.c | wc -l)
echo "***Total no. of feasible MC/DC sequences = " $feasible >> $BENCHMARK-gMCDC-AFL-score-report
echo "***Total no. of MC/DC sequences = " $total_seq >> $BENCHMARK-gMCDC-AFL-score-report
((score = (${feasible} * 100) / ${total_seq}))
echo "***MC/DC Score = " $score >> $BENCHMARK-gMCDC-AFL-score-report

Ares2=$(date +%s.%N)
dtA=$(echo "$Ares2 - $Ares1" | bc)
ddA=$(echo "$dtA/86400" | bc)
dtA2=$(echo "$dtA-86400*$ddA" | bc)
dhA=$(echo "$dtA2/3600" | bc)
dtA3=$(echo "$dtA2-3600*$dhA" | bc)
dmA=$(echo "$dtA3/60" | bc)
dsA=$(echo "$dtA3-60*$dmA" | bc)
echo "***Total AFL gMCDC runtime in seconds" $dtA >> ../Time-$BENCHMARK.txt
printf "Total AFL gMCDC runtime: %d:%02d:%02d:%02.4f\n" $ddA $dhA $dmA $dsA >> ../Time-$BENCHMARK.txt
echo "****************AFL gMCDC time Report - End**************************" >>  ../Time-$BENCHMARK.txt
############################################### gProfiler - CBMC - MCDC###########################################################
Ares1=$(date +%s.%N)
dtA=0

gcc -fprofile-arcs -ftest-coverage -g MetaWithBraces-V$VERSION.c

for q in `ls -v ../$BENCHMARK-TC/*`;
do
./a.out < $q >> temp1.txt
done
grep "FOUND" temp1.txt > temp2.txt
sort -u temp2.txt > final_result-gMCDC-CBMC.txt
rm a.out
feasible=$(grep "FOUND" final_result-gMCDC-CBMC.txt | wc -l)
total_seq=$(grep "FOUND" MetaWithBraces-V$VERSION.c | wc -l)
echo "***Total no. of feasible MC/DC sequences = " $feasible >>  $BENCHMARK-gMCDC-CBMC-score-report.txt
echo "***Total no. of MC/DC sequences = " $total_seq >>  $BENCHMARK-gMCDC-CBMC-score-report.txt
((score = (${feasible} * 100) / ${total_seq}))
echo "***MC/DC Score = " $score >> $BENCHMARK-gMCDC-CBMC-score-report.txt

Ares2=$(date +%s.%N)
dtA=$(echo "$Ares2 - $Ares1" | bc)
ddA=$(echo "$dtA/86400" | bc)
dtA2=$(echo "$dtA-86400*$ddA" | bc)
dhA=$(echo "$dtA2/3600" | bc)
dtA3=$(echo "$dtA2-3600*$dhA" | bc)
dmA=$(echo "$dtA3/60" | bc)
dsA=$(echo "$dtA3-60*$dmA" | bc)
echo "***Total CBMC gMCDC  runtime in seconds" $dtA >> ../Time-$BENCHMARK.txt
printf "Total CBMC gMCDC  runtime: %d:%02d:%02d:%02.4f\n" $ddA $dhA $dmA $dsA >> ../Time-$BENCHMARK.txt
echo "****************CBMC gMCDC  time Report - End**************************" >>  ../Time-$BENCHMARK.txt
cd ..
#################################################### Directory cleaning #########################################################

mkdir $BENCHMARK-RESULTS/PredicatesResults
mkdir $BENCHMARK-RESULTS/CBMC
mkdir $BENCHMARK-RESULTS/SCORE
mkdir $BENCHMARK-RESULTS/FOUND

mv SequenceGenerator/exp/* $BENCHMARK-RESULTS/PredicatesResults
mv SequenceGenerator/$BENCHMARK.c $BENCHMARK-RESULTS/PredicatesResults
mv CBMC/$BENCHMARK-result-MCDC-original.txt $BENCHMARK-RESULTS/CBMC
mv CBMC/$BENCHMARK-result-MCDC.txt $BENCHMARK-RESULTS/CBMC
mv CBMC/MetaWithBraces-V$VERSION.c $BENCHMARK-RESULTS/CBMC
mv CBMC/$BENCHMARK.c $BENCHMARK-RESULTS/CBMC
mv results-afl-$BENCHMARK $BENCHMARK-RESULTS
mv CBMC/$BENCHMARK-gMCDC-AFL-score-report $BENCHMARK-RESULTS/SCORE
mv CBMC/$BENCHMARK-gMCDC-CBMC-score-report.txt $BENCHMARK-RESULTS/SCORE
mv CBMC/final_result* $BENCHMARK-RESULTS/FOUND

rm SequenceGenerator/err.txt
rm SequenceGenerator/keyValues.txt
rm CBMC/temp*.txt
rm CBMC/MetaWithBraces*
############################################### SC-MCC Meta Program generation ###################################################

cp Programs/GCOV/$BENCHMARK.c SequenceGenerator/
cp Programs/CBMC/$BENCHMARK.c CBMC/

Xres1=$(date +%s.%N)
let dtX=0

cd SequenceGenerator
./seqshell.sh $BENCHMARK.c $VERSION 
mv exp/meta/MetaWithBraces-V$VERSION.c ../CBMC/
cd ..
Xres2=$(date +%s.%N)
dtX=$(echo "$Xres2 - $Xres1" | bc)
ddX=$(echo "$dtX/86400" | bc)
dtX2=$(echo "$dtX-86400*$ddX" | bc)
dhX=$(echo "$dtX2/3600" | bc)
dtX3=$(echo "$dtX2-3600*$dhX" | bc)
dmX=$(echo "$dtX3/60" | bc)
dsX=$(echo "$dtX3-60*$dmX" | bc)
echo "***Total SC-MCC Meta Program generation time in seconds" $dtX >>  Time-$BENCHMARK.txt
printf "Total SC-MCC Meta Program generation time: %d:%02d:%02d:%02.4f\n" $ddX $dhX $dmX $dsX >>  Time-$BENCHMARK.txt
echo "****************SC-MCC Meta Program generation time Report - End**************************" >>  Time-$BENCHMARK.txt
############################################# gProfiler - AFL - SC-MCC ###################################################

cd CBMC

Ares1=$(date +%s.%N)
let dtA=0

gcc -fprofile-arcs -ftest-coverage -g MetaWithBraces-V$VERSION.c

for q in `ls -v ../cleaned-TCs/*`;
do
./a.out < $q >> temp1.txt
done
grep "FOUND" temp1.txt > temp2.txt
sort -u temp2.txt > final_result-gSC-MCC-AFL.txt
rm a.out
feasible=$(grep "FOUND" final_result-gSC-MCC-AFL.txt | wc -l)
total_seq=$(grep "FOUND" MetaWithBraces-V$VERSION.c | wc -l)
echo "***Total no. of feasible SC-MCC sequences = " $feasible >> $BENCHMARK-gSC-MCC-AFL-score-report.txt
echo "***Total no. of SC-MCC sequences = " $total_seq >> $BENCHMARK-gSC-MCC-AFL-score-report.txt
((score = (${feasible} * 100) / ${total_seq}))
echo "***SC-MCC Score = " $score >> $BENCHMARK-gSC-MCC-AFL-score-report.txt

Ares2=$(date +%s.%N)
dtA=$(echo "$Ares2 - $Ares1" | bc)
ddA=$(echo "$dtA/86400" | bc)
dtA2=$(echo "$dtA-86400*$ddA" | bc)
dhA=$(echo "$dtA2/3600" | bc)
dtA3=$(echo "$dtA2-3600*$dhA" | bc)
dmA=$(echo "$dtA3/60" | bc)
dsA=$(echo "$dtA3-60*$dmA" | bc)
echo "***Total gSC-MCC - AFL - runtime in seconds" $dtA >> ../Time-$BENCHMARK.txt
printf "Total gSC-MCC -AFL - runtime: %d:%02d:%02d:%02.4f\n" $ddA $dhA $dmA $dsA >> ../Time-$BENCHMARK.txt
echo "****************gSC-MCC -AFL -  time Report - End**************************" >>  ../Time-$BENCHMARK.txt
################################################# gProfiler - CBMC - SC-MCC #################################################
Ares1=$(date +%s.%N)
dtA=0

gcc -fprofile-arcs -ftest-coverage -g MetaWithBraces-V$VERSION.c

for q in `ls -v ../$BENCHMARK-TC/*`;
do
./a.out < $q >> temp1.txt
done
grep "FOUND" temp1.txt > temp2.txt
sort -u temp2.txt > final_result-gSC-MCC-CBMC.txt
rm a.out
feasible=$(grep "FOUND" final_result-gSC-MCC-CBMC.txt | wc -l)
total_seq=$(grep "FOUND" MetaWithBraces-V$VERSION.c | wc -l)
echo "***Total no. of feasible SC-MCC sequences = " $feasible >> $BENCHMARK-gSC-MCC-CBMC-score-report.txt
echo "***Total no. of SC-MCC sequences = " $total_seq >> $BENCHMARK-gSC-MCC-CBMC-score-report.txt
((score = (${feasible} * 100) / ${total_seq}))
echo "***SC-MCC Score = " $score >> $BENCHMARK-gSC-MCC-CBMC-score-report.txt

Ares2=$(date +%s.%N)
dtA=$(echo "$Ares2 - $Ares1" | bc)
ddA=$(echo "$dtA/86400" | bc)
dtA2=$(echo "$dtA-86400*$ddA" | bc)
dhA=$(echo "$dtA2/3600" | bc)
dtA3=$(echo "$dtA2-3600*$dhA" | bc)
dmA=$(echo "$dtA3/60" | bc)
dsA=$(echo "$dtA3-60*$dmA" | bc)
echo "***Total gSC-MCC - CBMC - runtime in seconds" $dtA >> ../Time-$BENCHMARK.txt
printf "Total  gSC-MCC - CBMC - runtime: %d:%02d:%02d:%02.4f\n" $ddA $dhA $dmA $dsA >> ../Time-$BENCHMARK.txt
echo "**************** gSC-MCC - CBMC -  time Report - End**************************" >>  ../Time-$BENCHMARK.txt
cd ..
############################################## Directory cleaning ########################################################
mv SequenceGenerator/exp/meta $BENCHMARK-RESULTS
mv SequenceGenerator/exp/* $BENCHMARK-RESULTS/PredicatesResults
mv SequenceGenerator/$BENCHMARK.c $BENCHMARK-RESULTS/PredicatesResults
mv CBMC/MetaWithBraces-V$VERSION.c $BENCHMARK-RESULTS/CBMC
mv CBMC/$BENCHMARK.c $BENCHMARK-RESULTS/CBMC
mv cleaned-TCs $BENCHMARK-RESULTS
mv $BENCHMARK-TC $BENCHMARK-RESULTS
mv Time-$BENCHMARK.txt $BENCHMARK-RESULTS
mv CBMC/$BENCHMARK-gSC-MCC-AFL-score-report.txt $BENCHMARK-RESULTS/SCORE
mv CBMC/$BENCHMARK-gSC-MCC-CBMC-score-report.txt $BENCHMARK-RESULTS/SCORE
mv CBMC/final_result* $BENCHMARK-RESULTS/FOUND
mv $BENCHMARK-RESULTS/cleaned-TCs $BENCHMARK-RESULTS/AFL-TCs
mv $BENCHMARK-RESULTS/*TC $BENCHMARK-RESULTS/CBMC-TCs

rm SequenceGenerator/err.txt
rm CBMC/temp*.txt
rm CBMC/MetaWithBraces*
##########################################################################################################################################
