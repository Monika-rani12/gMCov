#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
//removed
#endif

#define BOUND 1
int kappa;
int input,output;
#include <assert.h>
#include <math.h>
#include <stdlib.h>


int main()
{
kappa = 0;
    // main i/o-loop
      
printf("POINT: 265\n");

   
    int FLAG=0;
    
    while (FLAG<BOUND) {
printf("POINT: 266\n");

        int symb; scanf("%d",&symb);  
printf("POINT: 267\n");

        if((symb != 10) && (symb != 6) && (symb != 1) && (symb != 8) && (symb != 2) && (symb != 5) && (symb != 7) && (symb != 9) && (symb != 4) && (symb != 3)) {
          printf("POINT: 268\n");
}
else {
          printf("This is return -2 \n");
}

    FLAG++;
    //printf("%d",symb);
    }

 return 0;

}


