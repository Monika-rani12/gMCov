#!/bin/bash
set -x
prog=${1}

if  [ -f ${prog} ] 
then       
filename=`basename ${prog}`
dirname=`dirname ${prog}`
basename_NOSUFFIX=${filename%.c}
basename_C=${basename_NOSUFFIX}.c
cp ${basename_NOSUFFIX}.c ${basename_NOSUFFIX}-conv.c
basename_C_conv=${basename_NOSUFFIX}-conv.c
abspath_C="`cd \"$dirname\" 2>/dev/null && pwd || echo \"$dirname\"`/$basename_C"
else
echo "${prog} does not exist"
exit 2
fi  	
let S=1
#cil/bin/cilly --useLogicalOperators --save-temps ${basename_C} --noPrintLn --noWrap > /dev/null 2>&1
cil/bin/cilly --useLogicalOperators --save-temps ${basename_C} --noPrintLn --ptr_may_aliases > /dev/null 2>&1
#cil/bin/cilly --save-temps ${basename_C_conv} --noPrintLn --noWrap > /dev/null 2>&1
rm ${basename_NOSUFFIX}-conv.c
if [ $? != 0 ]
then
echo "ERROR post-processing the generated SE tree. Please run cilly on ${decompiled_C} for more info"
exit 1
fi
rm *.i
rm *.o
