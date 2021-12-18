//This program in Problem1-RERS2012.c
#include <assert.h>
#include <math.h>
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
//removed
#endif

#define BOUND 5

	// inputs
	int a= 1;
	int d= 4;
	int e= 5;
	int f= 6;
	int c= 3;
	int b= 2;

	// outputs
	int u = 21;
	int v = 22;
	int w = 23;
	int x = 24;
	int y = 25;
	int z = 26;

	int a17 = 1;
	int a7 = 0;
	int a20 = 1;
	int a8 = 15;
	int a12 = 8;
	int a16 = 5;
	int a21 = 1;
        int kappa;
	int calculate_output(int input) {
	    if((((a8==15)&&(((((a21==1)&&(((a16==5)||(a16==6))&&(input==1)))&&(a20==1))&&(a17==1))&&!(a7==1)))&&(a12==8))){
	    	a16 = 5;
	    	a20 = 0;
	    	return 0;////return 24;
	    } else if((((((((input==5)&&((((a16==6)&&(a17==1))||(!(a17==1)&&(a16==4)))||(!(a17==1)&&(a16==5))))&&(a20==1))&&(a12==8))&&(a7==1))&&!(a21==1))&&(a8==13))){
	    	a20 = 0;
	    	a16 = 6;
	    	a17 = 0;
	    	a8 = 15;
	    	a7 = 0;
	    	a21 = 1;
	    	return 0;////return 26;
	    } 
	    
	    if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	return 0;////return -1;
	    } 
	    if(((((((!(a17==1)&&!(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	return 0;////return -1;
	    } 
	   return 0;// //return -2; 
    	 printf("%d", a16);
	 printf("%d", a20);
	 printf("%d", a17);
	 printf("%d", a8);
	 printf("%d", a7);
	 printf("%d", a21);
	 printf("%d", input);
	}


		
int main()
{ 
kappa = 0;
    // default output
    int output = -1;

    // main i/o-loop
   
   for (int FLAG=0;FLAG<BOUND;FLAG++) {
    int symb; scanf("%d",&symb);     

        // operate eca engine
        output = calculate_output(symb);
        
    }
 return 0;
 }
