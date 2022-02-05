#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
//removed
#endif

#define BOUND 5
int kappa;
int input,output;
#include <assert.h>
#include <math.h>
#include <stdlib.h>




	// inputs
	int inputs[] = {10,6,1,8,2,5,7,9,4,3};


	void calculate_output(int);
	void calculate_outputm1(int);

	 int a49 = 10;
	 int a180 = 316;
	 int a65[] = {25,26,27,28,29,30};
	 int a198[] = {31,32,33,34,35,36};
	 int a77[] = {37,38,39,40,41,42};
	 int *a140 = a198;
	 int a172[] = {2,3,4,5,6,7,8,9};
	 int a105  = 34;
	 int cf = 1;
	 int a134[] = {2,3,4,5,6,7,8,9};
	 int a160 = 4;
	 int a87  = 33;
	 int a139 = 124;
	 int a170 = 3;
	 int a90[] = {28,29,30,31,32,33};
	 int a113[] = {34,35,36,37,38,39};
	 int a82[] = {40,41,42,43,44,45};
	 int *a3 = a82;
	 int a114 = 8;
	 int a120  = 35;
	 int a177  = 34;
	 int a72 = 17;
	 int a185[] = {34,35,36,37,38,39};
	 int a110[] = {40,41,42,43,44,45};
	 int a4[] = {46,47,48,49,50,51};
	 int *a0 = a4;
	 int a16 = 28;
	 int a121  = 32;
	 int a147  = 35;


 void calculate_outputm1(int input) {
    if(((a160 == a49 && a105 == 33) && (a139 <=  -26 && (((((36 == a49) &&  cf==1 ) && a105 == 33) && a160 == a49) && a105 == 33)))) {
    	
    } 
}

 void calculate_output(int input) {
        cf = 1;

    if(((a105 == 33 && ((a105 == 33 && ( cf==1  && a180 <=  64)) && a49 == 8)) && (((33 == a49) && a105 == 33) && a139 <=  -26))) {
    	if(((((( cf==1  && (29 == a49)) && a49 == 8) && (33 == a49)) && a139 <=  -26) && (((33 == a49) && a139 <=  -26) && (33 == a49)))) {
    		calculate_outputm1(input);
    	} 
       } 


   if((cf==1)) 
    {
    
    }
    	//fprintf(stderr, "Invalid input: %d\n", input); 
printf("%d \n",a160);
printf("%d \n",a105);
printf("%d \n",a139);
printf("%d \n",cf);
printf("%d \n",a105);
printf("%d \n",a49);
printf("%d \n",a140);
printf("%d \n",input);
}


int main()
{
kappa = 0;
    // main i/o-loop
      
    for (int FLAG=0;FLAG<BOUND;FLAG++) {
        int symb = nondet_int(); __CPROVER_input("symb",symb);
        __CPROVER_output("symb",symb); 
        if((symb != 10) && (symb != 6) && (symb != 1) && (symb != 8) && (symb != 2) && (symb != 5) && (symb != 7) && (symb != 9) && (symb != 4) && (symb != 3))
          return -2;
        calculate_output(symb);
    }
    
 return 0;

}


