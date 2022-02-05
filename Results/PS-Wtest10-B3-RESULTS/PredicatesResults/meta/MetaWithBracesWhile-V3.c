#include <assert.h>
#include <math.h>
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
//removed
#endif
#include <assert.h>
#define BOUND 3


// inputs
int a= 1;
int e= 5;
int d= 4;
int f= 6;
int c= 3;

// outputs
int u = 21;
int v = 22;
int w = 23;
int x = 24;
int y = 25;
int z = 26;


int a25 = 0;
int a11 = 0;
int a28 = 7;
int a19 = 1;
int a21 = 1;
int a17 = 8;
int kappa;
int calculate_output(int input) {
printf("POINT: 1\n");

if((((!(a11==1)&&((a19==1)&&((input==4)&&((!(a25==1)&&(a28==8))||((a25==1)&&(a28==9))))))&&(a21==1))&&(a17==8))){
printf("POINT: 2\n");
a28 = 9;
a11 = 1;
a25 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 3\n");

 if(((a17==8)&&((((!(a11==1)&&((a21==1)&&(input==6)))&&(a28==7))&&(a19==1))&&!(a25==1)))){
printf("POINT: 4\n");
a28 = 10;
printf("%d", 22);//return 22;
} else{
printf("POINT: 5\n");

 if(((a21==1)&&((a19==1)&&((((((a25==1)||!(a25==1))&&(input==3))&&(a17==9))&&(a11==1))&&(a28==9))))){
printf("POINT: 6\n");
a28 = 7;
a25 = 1;
printf("%d", 22);//return 22;
} else{
printf("POINT: 7\n");

 if(((a28==9)&&(!(a19==1)&&((a21==1)&&((((input==4)&&!(a25==1))&&!(a11==1))&&(a17==8)))))){
printf("POINT: 8\n");
a25 = 1;
a19 = 1;
a11 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 9\n");

 if(((((a17==8)&&((((input==1)&&((a25==1)||!(a25==1)))&&!(a11==1))&&(a19==1)))&&(a21==1))&&(a28==10))){
printf("POINT: 10\n");
a25 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 11\n");

 if(((a19==1)&&(!(a25==1)&&((a21==1)&&((((input==1)&&(a17==8))&&!(a11==1))&&(a28==7)))))){
printf("POINT: 12\n");
a28 = 11;
a25 = 1;
printf("%d", 26);//return 26;
} else{
printf("POINT: 13\n");

 if(((((!(a19==1)&&((input==1)&&((((a25==1)&&(a28==7))||((a28==7)&&!(a25==1)))||((a25==1)&&(a28==8)))))&&(a21==1))&&(a17==8))&&!(a11==1))){
printf("POINT: 14\n");
a28 = 7;
a11 = 1;
a25 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 15\n");

 if(((a19==1)&&(((((input==1)&&(((a25==1)&&(a28==8))||(((a28==7)&&(a25==1))||((a28==7)&&!(a25==1)))))&&(a11==1))&&(a21==1))&&(a17==9)))){
printf("POINT: 16\n");
a28 = 11;
a17 = 7;
a11 = 0;
a25 = 1;
printf("%d", 22);//return 22;
} else{
printf("POINT: 17\n");

 if(((a19==1)&&(((a17==8)&&(((input==6)&&((!(a25==1)&&(a28==8))||((a25==1)&&(a28==9))))&&!(a11==1)))&&(a21==1)))){
printf("POINT: 18\n");
a28 = 10;
a25 = 0;
printf("%d", 22);//return 22;
} else{
printf("POINT: 19\n");

 if((!(a11==1)&&((((a21==1)&&((input==1)&&(((a28==8)&&!(a25==1))||((a25==1)&&(a28==9)))))&&!(a19==1))&&(a17==8)))){
printf("POINT: 20\n");
a28 = 7;
a25 = 0;
a11 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 21\n");

 if((!(a19==1)&&(((((a17==8)&&((a25==1)&&(input==3)))&&(a28==10))&&!(a11==1))&&(a21==1)))){
printf("POINT: 22\n");
printf("POINT: 23\n");

if((a19==1)){
printf("POINT: 24\n");

}else{
a19 = 1;
a28 = 8;
}
printf("%d", 26);//return 26;
} else{
printf("POINT: 25\n");

 if((((!(a19==1)&&((a21==1)&&((((a25==1)&&(a28==8))||(((a28==7)&&(a25==1))||((a28==7)&&!(a25==1))))&&(input==4))))&&!(a11==1))&&(a17==8))){
printf("POINT: 26\n");
printf("POINT: 27\n");

if((a28==10)){
printf("POINT: 28\n");
a28 = 7;
a25 = 1;
}else{
a28 = 8;
a25 = 0;
}
printf("%d", 22);//return 22;
} else{
printf("POINT: 29\n");

 if(((a17==8)&&((a21==1)&&((a25==1)&&((a19==1)&&(!(a11==1)&&((a28==11)&&(input==3)))))))){
printf("POINT: 30\n");
a28 = 10;
a25 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 31\n");

 if(((a28==9)&&(((!(a19==1)&&(((input==3)&&!(a11==1))&&(a17==8)))&&!(a25==1))&&(a21==1)))){
printf("POINT: 32\n");
a28 = 10;
a19 = 1;
printf("%d", 22);//return 22;
} else{
printf("POINT: 33\n");

 if(((!(a11==1)&&(((a28==11)&&((a25==1)&&((input==1)&&(a19==1))))&&(a17==8)))&&(a21==1))){
printf("POINT: 34\n");
a17 = 7;
a25 = 0;
a11 = 1;
a28 = 10;
a19 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 35\n");

 if((((a11==1)&&((((((a25==1)&&(a28==8))||(((a25==1)&&(a28==7))||(!(a25==1)&&(a28==7))))&&(input==6))&&(a19==1))&&(a17==9)))&&(a21==1))){
printf("POINT: 36\n");
a17 = 8;
a25 = 0;
a19 = 0;
a28 = 11;
a11 = 0;
printf("%d", 23);//return 23;
} else{
printf("POINT: 37\n");

 if(((a17==8)&&((a21==1)&&(!(a11==1)&&(!(a19==1)&&(((!(a25==1)&&(a28==8))||((a25==1)&&(a28==9)))&&(input==3))))))){
printf("POINT: 38\n");
a28 = 10;
a19 = 1;
a11 = 1;
a25 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 39\n");

 if((((((a21==1)&&((a28==10)&&((input==1)&&(a25==1))))&&!(a11==1))&&(a17==8))&&!(a19==1))){
printf("POINT: 40\n");
a25 = 0;
a19 = 1;
printf("%d", 26);//return 26;
} else{
printf("POINT: 41\n");

 if((!(a11==1)&&(!(a19==1)&&(((a17==8)&&((input==6)&&((((a25==1)&&(a28==7))||((a28==7)&&!(a25==1)))||((a28==8)&&(a25==1)))))&&(a21==1))))){
printf("POINT: 42\n");
a17 = 7;
a25 = 1;
a11 = 1;
a28 = 7;
a19 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 43\n");

 if(((((a17==8)&&(!(a19==1)&&(((input==6)&&(a21==1))&&!(a25==1))))&&!(a11==1))&&(a28==9))){
printf("POINT: 44\n");
a28 = 10;
a19 = 1;
printf("%d", 22);//return 22;
} else{
printf("POINT: 45\n");

 if((!(a11==1)&&((!(a25==1)&&(((a21==1)&&((input==1)&&(a19==1)))&&(a17==8)))&&(a28==11)))){
printf("POINT: 46\n");
a28 = 7;
a19 = 0;
a11 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 47\n");

 if((((a11==1)&&(((a19==1)&&((a21==1)&&(((a25==1)||!(a25==1))&&(input==4))))&&(a17==9)))&&(a28==9))){
printf("POINT: 48\n");
a25 = 0;
a17 = 8;
printf("%d",-1);//return -1;
} else{
printf("POINT: 49\n");

 if(((!(a11==1)&&((a28==9)&&(((!(a19==1)&&(input==5))&&!(a25==1))&&(a21==1))))&&(a17==8))){
printf("POINT: 50\n");
a17 = 7;
a11 = 1;
a25 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 51\n");

 if(((!(a11==1)&&(((a17==8)&&(((((a28==7)&&(a25==1))||(!(a25==1)&&(a28==7)))||((a28==8)&&(a25==1)))&&(input==3)))&&!(a19==1)))&&(a21==1))){
printf("POINT: 52\n");
a11 = 1;
a19 = 1;
a28 = 10;
a25 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 53\n");

 if(((a21==1)&&(!(a19==1)&&((((input==5)&&(((a28==8)&&(a25==1))||(((a25==1)&&(a28==7))||(!(a25==1)&&(a28==7)))))&&!(a11==1))&&(a17==8))))){
printf("POINT: 54\n");
a25 = 1;
a19 = 1;
a28 = 7;
printf("%d",-1);//return -1;
} else{
printf("POINT: 55\n");

 if((((a17==9)&&(((a28==8)&&(((input==1)&&(a19==1))&&!(a25==1)))&&(a11==1)))&&(a21==1))){
printf("POINT: 56\n");
a17 = 8;
a19 = 0;
a28 = 9;
a25 = 1;
printf("%d", 22);//return 22;
} else{
printf("POINT: 57\n");

 if((((a21==1)&&((a19==1)&&((a28==7)&&((a17==8)&&(!(a25==1)&&(input==3))))))&&!(a11==1))){
printf("POINT: 58\n");
a25 = 1;
a28 = 9;
printf("%d", 26);//return 26;
} else{
printf("POINT: 59\n");

 if(((a28==11)&&(((a17==8)&&((((input==6)&&(a21==1))&&(a19==1))&&!(a25==1)))&&!(a11==1)))){
printf("POINT: 60\n");
a17 = 7;
a11 = 1;
a28 = 7;
a25 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 61\n");

 if(((!(a11==1)&&(((a17==8)&&((a21==1)&&((input==3)&&(a28==8))))&&(a19==1)))&&(a25==1))){
printf("POINT: 62\n");
a28 = 10;
a19 = 0;
printf("%d", 26);//return 26;
} else{
printf("POINT: 63\n");

 if((((a21==1)&&(((a19==1)&&(((((a25==1)&&(a28==7))||((a28==7)&&!(a25==1)))||((a25==1)&&(a28==8)))&&(input==4)))&&(a11==1)))&&(a17==9))){
printf("POINT: 64\n");
a17 = 8;
a25 = 1;
a11 = 0;
a28 = 8;
printf("%d",-1);//return -1;
} else{
printf("POINT: 65\n");

 if((((!(a11==1)&&((a17==8)&&(((input==4)&&(a19==1))&&(a28==8))))&&(a21==1))&&(a25==1))){
printf("POINT: 66\n");
printf("%d", 22);//return 22;
} else{
printf("POINT: 67\n");

 if(((a19==1)&&((((((input==4)&&(a21==1))&&(a28==9))&&!(a25==1))&&!(a11==1))&&(a17==8)))){
printf("POINT: 68\n");
printf("%d", 22);//return 22;
} else{
printf("POINT: 69\n");

 if(((a17==8)&&((((((input==1)&&(a21==1))&&!(a11==1))&&(a19==1))&&!(a25==1))&&(a28==9)))){
printf("POINT: 70\n");
printf("%d", 23);//return 23;
} else{
printf("POINT: 71\n");

 if((((((((input==4)&&((a25==1)||!(a25==1)))&&!(a11==1))&&(a21==1))&&(a17==8))&&(a28==10))&&(a19==1))){
printf("POINT: 72\n");
a25 = 1;
printf("%d", 22);//return 22;
} else{
printf("POINT: 73\n");

 if(((!(a25==1)&&((a11==1)&&((a28==8)&&(((a17==9)&&(input==4))&&(a19==1)))))&&(a21==1))){
printf("POINT: 74\n");
a17 = 7;
a11 = 0;
printf("%d", 22);//return 22;
} else{
printf("POINT: 75\n");

 if((!(a19==1)&&((a17==8)&&((a28==10)&&(((a25==1)&&(!(a11==1)&&(input==5)))&&(a21==1)))))){
printf("POINT: 76\n");
a19 = 1;
a28 = 11;
printf("%d", 23);//return 23;
} else{
printf("POINT: 77\n");

 if((((((a21==1)&&((input==1)&&((!(a25==1)&&(a28==8))||((a25==1)&&(a28==9)))))&&(a17==8))&&!(a11==1))&&(a19==1))){
printf("POINT: 78\n");
printf("POINT: 79\n");

if((a11==1)){
printf("POINT: 80\n");
a19 = 0;
a25 = 0;
a28 = 9;
}else{
a25 = 1;
a28 = 9;
}
printf("%d", 23);//return 23;
} else{
printf("POINT: 81\n");

 if(((a21==1)&&((((a19==1)&&((a25==1)&&((a28==11)&&(input==6))))&&!(a11==1))&&(a17==8)))){
printf("POINT: 82\n");
a28 = 10;
printf("%d",-1);//return -1;
} else{
printf("POINT: 83\n");

 if((!(a11==1)&&((a19==1)&&((a28==10)&&(((((a25==1)||!(a25==1))&&(input==5))&&(a17==8))&&(a21==1)))))){
printf("POINT: 84\n");
a25 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 85\n");

 if((((((a17==9)&&((((a25==1)||!(a25==1))&&(input==6))&&(a11==1)))&&(a19==1))&&(a21==1))&&(a28==9))){
printf("POINT: 86\n");
a17 = 8;
a28 = 8;
a25 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 87\n");

 if((((a17==8)&&(((((input==6)&&(a25==1))&&!(a19==1))&&!(a11==1))&&(a28==10)))&&(a21==1))){
printf("POINT: 88\n");
printf("%d", 26);//return 26;
} else{
printf("POINT: 89\n");

 if(((!(a19==1)&&((a17==8)&&(!(a11==1)&&((input==1)&&((((a28==10)&&!(a25==1))||((a25==1)&&(a28==11)))||(!(a25==1)&&(a28==11)))))))&&(a21==1))){
printf("POINT: 90\n");
a28 = 7;
a25 = 1;
a19 = 1;
a17 = 7;
a11 = 1;
printf("%d", 22);//return 22;
} else{
printf("POINT: 91\n");

 if((((((((input==1)&&(a21==1))&&(a28==9))&&!(a19==1))&&!(a25==1))&&(a17==8))&&!(a11==1))){
printf("POINT: 92\n");
printf("%d", 23);//return 23;
} else{
printf("POINT: 93\n");

 if(((a17==8)&&(((!(a11==1)&&((!(a25==1)&&(input==4))&&(a19==1)))&&(a28==7))&&(a21==1)))){
printf("POINT: 94\n");
a28 = 9;
printf("%d", 23);//return 23;
} else{
printf("POINT: 95\n");

 if((!(a11==1)&&(((a17==8)&&((((!(a25==1)&&(a28==11))||((!(a25==1)&&(a28==10))||((a28==11)&&(a25==1))))&&(input==3))&&(a21==1)))&&!(a19==1)))){
printf("POINT: 96\n");
printf("POINT: 97\n");

if((a25==1)){
printf("POINT: 98\n");
a19 = 1;
a28 = 7;
a25 = 1;
a11 = 1;
}else{
a28 = 7;
a25 = 1;
}
printf("%d",-1);//return -1;
} else{
printf("POINT: 99\n");

 if(((((!(a11==1)&&(((!(a25==1)&&(a28==8))||((a25==1)&&(a28==9)))&&(input==5)))&&(a21==1))&&!(a19==1))&&(a17==8))){
printf("POINT: 100\n");
a25 = 1;
a19 = 1;
a28 = 7;
printf("%d",-1);//return -1;
} else{
printf("POINT: 101\n");

 if((((a17==9)&&(((((input==1)&&((a25==1)||!(a25==1)))&&(a11==1))&&(a21==1))&&(a19==1)))&&(a28==9))){
printf("POINT: 102\n");
a28 = 7;
a17 = 8;
a25 = 0;
a11 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 103\n");

 if((!(a11==1)&&((a19==1)&&(((((a28==9)&&(input==6))&&(a21==1))&&(a17==8))&&!(a25==1))))){
printf("POINT: 104\n");
printf("%d", 23);//return 23;
} else{
printf("POINT: 105\n");

 if(((a17==9)&&((a21==1)&&((a11==1)&&(((input==3)&&(((a25==1)&&(a28==8))||(((a28==7)&&(a25==1))||(!(a25==1)&&(a28==7)))))&&(a19==1)))))){
printf("POINT: 106\n");
printf("POINT: 107\n");

if((a19==1)){
printf("POINT: 108\n");
a25 = 0;
a19 = 0;
a17 = 7;
a28 = 9;
a11 = 0;
}else{
a19 = 0;
a11 = 0;
a28 = 10;
a25 = 1;
a17 = 7;
}
printf("%d", 23);//return 23;
} else{
printf("POINT: 109\n");

 if(((a28==7)&&((a17==8)&&(!(a25==1)&&((a21==1)&&((a19==1)&&((input==5)&&!(a11==1)))))))){
printf("POINT: 110\n");
a25 = 1;
a28 = 8;
printf("%d", 21);//return 21;
} else{
printf("POINT: 111\n");

 if(((a28==8)&&((a21==1)&&((!(a11==1)&&(((input==1)&&(a17==8))&&(a19==1)))&&(a25==1))))){
printf("POINT: 112\n");
a28 = 10;
printf("%d", 26);//return 26;
} else{
printf("POINT: 113\n");

 if((((((a17==8)&&(((input==6)&&((a25==1)||!(a25==1)))&&(a21==1)))&&(a28==10))&&!(a11==1))&&(a19==1))){
printf("POINT: 114\n");
a25 = 0;
printf("%d", 22);//return 22;
} else{
printf("POINT: 115\n");

 if(((!(a11==1)&&((!(a19==1)&&(((!(a25==1)&&(a28==11))||(((a28==10)&&!(a25==1))||((a25==1)&&(a28==11))))&&(input==5)))&&(a17==8)))&&(a21==1))){
printf("POINT: 116\n");
a25 = 0;
a19 = 1;
a28 = 9;
printf("%d",-1);//return -1;
} else{
printf("POINT: 117\n");

 if(((a17==8)&&(((a21==1)&&(!(a11==1)&&((a25==1)&&((a28==8)&&(input==6)))))&&(a19==1)))){
printf("POINT: 118\n");
printf("%d", 26);//return 26;
} else{
printf("POINT: 119\n");

 if((((a19==1)&&((a17==8)&&(((!(a25==1)&&(input==5))&&(a21==1))&&!(a11==1))))&&(a28==11))){
printf("POINT: 120\n");
a28 = 7;
a25 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 121\n");

 if(((a11==1)&&(((a17==9)&&((a28==9)&&((a19==1)&&(((a25==1)||!(a25==1))&&(input==5)))))&&(a21==1)))){
printf("POINT: 122\n");
printf("POINT: 123\n");

if((a11==1)){
printf("POINT: 124\n");
a25 = 0;
a17 = 8;
}else{
a28 = 7;
a25 = 0;
a11 = 0;
a19 = 0;
a17 = 8;
}
printf("%d", 25);//return 25;
} else{
printf("POINT: 125\n");

 if((((((((input==3)&&(a19==1))&&(a21==1))&&(a17==8))&&!(a25==1))&&(a28==11))&&!(a11==1))){
printf("POINT: 126\n");
a25 = 1;
a11 = 1;
a28 = 10;
printf("%d",-1);//return -1;
} else{
printf("POINT: 127\n");

 if(((a19==1)&&((a21==1)&&((((input==5)&&(((a25==1)&&(a28==8))||(((a28==7)&&(a25==1))||(!(a25==1)&&(a28==7)))))&&(a11==1))&&(a17==9))))){
printf("POINT: 128\n");
printf("POINT: 129\n");

if((a25==1)){
printf("POINT: 130\n");
a11 = 0;
a19 = 0;
a25 = 1;
a28 = 10;
a17 = 8;
}else{
a17 = 8;
a25 = 1;
a11 = 0;
a28 = 8;
}
printf("%d", 22);//return 22;
} else{
printf("POINT: 131\n");

 if((((a19==1)&&(((!(a11==1)&&(((a25==1)||!(a25==1))&&(input==3)))&&(a28==10))&&(a21==1)))&&(a17==8))){
printf("POINT: 132\n");
a25 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 133\n");

 if(((!(a11==1)&&(((((input==4)&&(a17==8))&&!(a25==1))&&(a21==1))&&(a28==11)))&&(a19==1))){
printf("POINT: 134\n");
printf("POINT: 135\n");

if((a11==1)){
printf("POINT: 136\n");
a28 = 8;
a19 = 0;
}
printf("%d", 22);//return 22;
} else{
printf("POINT: 137\n");

 if((((!(a19==1)&&(((input==4)&&(((!(a25==1)&&(a28==10))||((a28==11)&&(a25==1)))||(!(a25==1)&&(a28==11))))&&(a21==1)))&&(a17==8))&&!(a11==1))){
printf("POINT: 138\n");
printf("POINT: 139\n");

if((a17==7)){
printf("POINT: 140\n");
a25 = 0;
a28 = 9;
}else{
a11 = 1;
a17 = 7;
a28 = 10;
a25 = 0;
a19 = 1;
}
printf("%d",-1);//return -1;
} else{
printf("POINT: 141\n");

 if((!(a11==1)&&(((a17==8)&&((((a25==1)&&(input==4))&&(a19==1))&&(a28==11)))&&(a21==1)))){
printf("POINT: 142\n");
a28 = 9;
a11 = 1;
a25 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 143\n");

 if((((((a21==1)&&((((a28==8)&&!(a25==1))||((a28==9)&&(a25==1)))&&(input==6)))&&!(a11==1))&&!(a19==1))&&(a17==8))){
printf("POINT: 144\n");
a19 = 1;
a11 = 1;
a17 = 7;
a28 = 7;
a25 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 145\n");

 if(((a19==1)&&((((a21==1)&&((!(a25==1)&&(input==3))&&(a17==9)))&&(a28==8))&&(a11==1)))){
printf("POINT: 146\n");
a25 = 1;
a11 = 0;
a17 = 8;
a28 = 7;
a19 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 147\n");

 if(((a17==8)&&(((a21==1)&&(((input==5)&&((!(a25==1)&&(a28==8))||((a28==9)&&(a25==1))))&&(a19==1)))&&!(a11==1)))){
printf("POINT: 148\n");
a11 = 1;
a19 = 0;
a25 = 1;
a17 = 7;
a28 = 9;
printf("%d",-1);//return -1;
} else{
printf("POINT: 149\n");

 if(((a19==1)&&(((((a17==8)&&((input==5)&&!(a11==1)))&&(a21==1))&&(a25==1))&&(a28==8)))){
printf("POINT: 150\n");
a28 = 11;
printf("%d", 23);//return 23;
} else{
printf("POINT: 151\n");

 if((((!(a11==1)&&((((a21==1)&&(input==4))&&(a28==10))&&(a17==8)))&&!(a19==1))&&(a25==1))){
printf("POINT: 152\n");
printf("%d", 22);//return 22;
} else{
printf("POINT: 153\n");

 if(((a28==8)&&(((a19==1)&&((a11==1)&&(!(a25==1)&&((a17==9)&&(input==6)))))&&(a21==1)))){
printf("POINT: 154\n");
printf("POINT: 155\n");

if((a25==1)){
printf("POINT: 156\n");
a17 = 8;
a11 = 0;
}else{
a28 = 11;
a17 = 7;
}
printf("%d", 21);//return 21;
} else{
printf("POINT: 157\n");

 if((!(a11==1)&&((((a21==1)&&((input==6)&&((((a28==10)&&!(a25==1))||((a25==1)&&(a28==11)))||(!(a25==1)&&(a28==11)))))&&(a17==8))&&!(a19==1)))){
printf("POINT: 158\n");
a28 = 11;
a19 = 1;
a25 = 1;
printf("%d", 22);//return 22;
} else{
printf("POINT: 159\n");

 if((((((!(a25==1)&&((a19==1)&&(input==3)))&&(a28==9))&&(a21==1))&&(a17==8))&&!(a11==1))){
printf("POINT: 160\n");
a19 = 0;
a28 = 7;
printf("%d", 25);//return 25;
} else{
printf("POINT: 161\n");

 if((((a17==8)&&((((input==4)&&(((a28==8)&&!(a25==1))||((a25==1)&&(a28==9))))&&(a21==1))&&!(a19==1)))&&!(a11==1))){
printf("POINT: 162\n");
a28 = 8;
a25 = 0;
printf("%d", 22);//return 22;
} else{
printf("POINT: 163\n");

 if((((!(a11==1)&&((((a19==1)&&(input==5))&&(a17==8))&&(a21==1)))&&(a28==9))&&!(a25==1))){
printf("POINT: 164\n");
printf("%d", 21);//return 21;
} else{
printf("POINT: 165\n");

 if((((a11==1)&&((a19==1)&&((a21==1)&&(((a17==9)&&(input==5))&&!(a25==1)))))&&(a28==8))){
printf("POINT: 166\n");
a17 = 7;
printf("%d",-1);//return -1;
} else{
printf("POINT: 167\n");

 if((!(a11==1)&&((a21==1)&&(((a19==1)&&((a17==8)&&((a25==1)&&(input==5))))&&(a28==11))))){
printf("POINT: 168\n");
printf("%d",-1);//return -1;
} else{
printf("POINT: 169\n");

 if(((a19==1)&&((a17==8)&&(((((!(a25==1)&&(a28==8))||((a25==1)&&(a28==9)))&&(input==3))&&!(a11==1))&&(a21==1))))){
printf("POINT: 170\n");
a25 = 0;
a28 = 10;
printf("%d", 22);//return 22;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
printf("POINT: 171\n");

if((((((!(a25==1)&&(a11==1))&&(a28==7))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 172\n");
printf("%d",-1);//return -1;
}
printf("POINT: 173\n");

if(((((((a25==1)&&(a11==1))&&(a28==10))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 174\n");
printf("%d",-1);//return -1;
}
printf("POINT: 175\n");

if(((((((a25==1)&&!(a11==1))&&(a28==7))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 176\n");
printf("%d",-1);//return -1;
}
printf("POINT: 177\n");

if(((((((a25==1)&&(a11==1))&&(a28==7))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 178\n");
printf("%d",-1);//return -1;
}
printf("POINT: 179\n");

if(((((((a25==1)&&(a11==1))&&(a28==9))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 180\n");
printf("%d",-1);//return -1;
}
printf("POINT: 181\n");

if(((((((a25==1)&&(a11==1))&&(a28==9))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 182\n");
printf("%d",-1);//return -1;
}
printf("POINT: 183\n");

if((((((!(a25==1)&&(a11==1))&&(a28==10))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 184\n");
printf("%d",-1);//return -1;
}
printf("POINT: 185\n");

if((((((!(a25==1)&&(a11==1))&&(a28==9))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 186\n");
printf("%d",-1);//return -1;
}
printf("POINT: 187\n");

if((((((!(a25==1)&&(a11==1))&&(a28==7))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 188\n");
printf("%d",-1);//return -1;
}
printf("POINT: 189\n");

if(((((((a25==1)&&(a11==1))&&(a28==8))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 190\n");
printf("%d",-1);//return -1;
}
printf("POINT: 191\n");

if(((((((a25==1)&&(a11==1))&&(a28==11))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 192\n");
printf("%d",-1);//return -1;
}
printf("POINT: 193\n");

if(((((((a25==1)&&!(a11==1))&&(a28==7))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 194\n");
printf("%d",-1);//return -1;
}
printf("POINT: 195\n");

if((((((!(a25==1)&&(a11==1))&&(a28==8))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 196\n");
printf("%d",-1);//return -1;
}
printf("POINT: 197\n");

if(((((((a25==1)&&!(a11==1))&&(a28==10))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 198\n");
printf("%d",-1);//return -1;
}
printf("POINT: 199\n");

if(((((((a25==1)&&!(a11==1))&&(a28==11))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 200\n");
printf("%d",-1);//return -1;
}
printf("POINT: 201\n");

if(((((((a25==1)&&!(a11==1))&&(a28==8))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 202\n");
printf("%d",-1);//return -1;
}
printf("POINT: 203\n");

if((((((!(a25==1)&&!(a11==1))&&(a28==8))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 204\n");
printf("%d",-1);//return -1;
}
printf("POINT: 205\n");

if((((((!(a25==1)&&!(a11==1))&&(a28==9))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 206\n");
printf("%d",-1);//return -1;
}
printf("POINT: 207\n");

if((((((!(a25==1)&&!(a11==1))&&(a28==7))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 208\n");
printf("%d",-1);//return -1;
}
printf("POINT: 209\n");

if((((((!(a25==1)&&(a11==1))&&(a28==8))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 210\n");
printf("%d",-1);//return -1;
}
printf("POINT: 211\n");

if((((((!(a25==1)&&(a11==1))&&(a28==9))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 212\n");
printf("%d",-1);//return -1;
}
printf("POINT: 213\n");

if(((((((a25==1)&&!(a11==1))&&(a28==7))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 214\n");
printf("%d",-1);//return -1;
}
printf("POINT: 215\n");

if((((((!(a25==1)&&(a11==1))&&(a28==11))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 216\n");
printf("%d",-1);//return -1;
}
printf("POINT: 217\n");

if((((((!(a25==1)&&(a11==1))&&(a28==8))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 218\n");
printf("%d",-1);//return -1;
}
printf("POINT: 219\n");

if(((((((a25==1)&&(a11==1))&&(a28==10))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 220\n");
printf("%d",-1);//return -1;
}
printf("POINT: 221\n");

if((((((!(a25==1)&&(a11==1))&&(a28==9))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 222\n");
printf("%d",-1);//return -1;
}
printf("POINT: 223\n");

if(((((((a25==1)&&(a11==1))&&(a28==11))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 224\n");
printf("%d",-1);//return -1;
}
printf("POINT: 225\n");

if(((((((a25==1)&&(a11==1))&&(a28==8))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 226\n");
printf("%d",-1);//return -1;
}
printf("POINT: 227\n");

if((((((!(a25==1)&&!(a11==1))&&(a28==8))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 228\n");
printf("%d",-1);//return -1;
}
printf("POINT: 229\n");

if(((((((a25==1)&&(a11==1))&&(a28==8))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 230\n");
printf("%d",-1);//return -1;
}
printf("POINT: 231\n");

if(((((((a25==1)&&(a11==1))&&(a28==7))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 232\n");
printf("%d",-1);//return -1;
}
printf("POINT: 233\n");

if((((((!(a25==1)&&(a11==1))&&(a28==10))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 234\n");
printf("%d",-1);//return -1;
}
printf("POINT: 235\n");

if(((((((a25==1)&&(a11==1))&&(a28==8))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 236\n");
printf("%d",-1);//return -1;
}
printf("POINT: 237\n");

if((((((!(a25==1)&&!(a11==1))&&(a28==9))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 238\n");
printf("%d",-1);//return -1;
}
printf("POINT: 239\n");

if((((((!(a25==1)&&(a11==1))&&(a28==7))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 240\n");
printf("%d",-1);//return -1;
}
printf("POINT: 241\n");

if(((((((a25==1)&&!(a11==1))&&(a28==8))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 242\n");
printf("%d",-1);//return -1;
}
printf("POINT: 243\n");

if((((((!(a25==1)&&(a11==1))&&(a28==9))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 244\n");
printf("%d",-1);//return -1;
}
printf("POINT: 245\n");

if((((((!(a25==1)&&(a11==1))&&(a28==8))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 246\n");
printf("%d",-1);//return -1;
}
printf("POINT: 247\n");

if(((((((a25==1)&&(a11==1))&&(a28==11))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 248\n");
printf("%d",-1);//return -1;
}
printf("POINT: 249\n");

if(((((((a25==1)&&!(a11==1))&&(a28==11))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 250\n");
printf("%d",-1);//return -1;
}
printf("POINT: 251\n");

if(((((((a25==1)&&(a11==1))&&(a28==7))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 252\n");
printf("%d",-1);//return -1;
}
printf("POINT: 253\n");

if((((((!(a25==1)&&(a11==1))&&(a28==11))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 254\n");
printf("%d",-1);//return -1;
}
printf("POINT: 255\n");

if((((((!(a25==1)&&(a11==1))&&(a28==10))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 256\n");
printf("%d",-1);//return -1;
}
printf("POINT: 257\n");

if((((((!(a25==1)&&!(a11==1))&&(a28==11))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 258\n");
printf("%d",-1);//return -1;
}
printf("POINT: 259\n");

if(((((((a25==1)&&(a11==1))&&(a28==7))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 260\n");
printf("%d",-1);//return -1;
}
printf("POINT: 261\n");

if(((((((a25==1)&&(a11==1))&&(a28==10))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 262\n");
printf("%d",-1);//return -1;
}
printf("POINT: 263\n");

if((((((!(a25==1)&&(a11==1))&&(a28==11))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 264\n");
printf("%d",-1);//return -1;
}
printf("POINT: 265\n");

if((((((!(a25==1)&&!(a11==1))&&(a28==7))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 266\n");
printf("%d",-1);//return -1;
}
printf("POINT: 267\n");

if(((((((a25==1)&&(a11==1))&&(a28==9))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 268\n");
printf("%d",-1);//return -1;
}
printf("POINT: 269\n");

if(((((((a25==1)&&(a11==1))&&(a28==10))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 270\n");
printf("%d",-1);//return -1;
}
printf("POINT: 271\n");

if((((((!(a25==1)&&!(a11==1))&&(a28==11))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 272\n");
printf("%d",-1);//return -1;
}
printf("POINT: 273\n");

if((((((!(a25==1)&&!(a11==1))&&(a28==10))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 274\n");
printf("%d",-1);//return -1;
}
printf("POINT: 275\n");

if(((((((a25==1)&&!(a11==1))&&(a28==9))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 276\n");
printf("%d",-1);//return -1;
}
printf("POINT: 277\n");

if(((((((a25==1)&&!(a11==1))&&(a28==10))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 278\n");
printf("%d",-1);//return -1;
}
printf("POINT: 279\n");

if((((((!(a25==1)&&(a11==1))&&(a28==7))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 280\n");
printf("%d",-1);//return -1;
}
printf("POINT: 281\n");

if((((((!(a25==1)&&!(a11==1))&&(a28==10))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 282\n");
printf("%d",-1);//return -1;
}
printf("POINT: 283\n");

if((((((!(a25==1)&&(a11==1))&&(a28==11))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 284\n");
printf("%d",-1);//return -1;
}
printf("POINT: 285\n");

if(((((((a25==1)&&(a11==1))&&(a28==9))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("POINT: 286\n");
printf("%d",-1);//return -1;
}
printf("POINT: 287\n");

if(((((((a25==1)&&(a11==1))&&(a28==11))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 288\n");
printf("%d",-1);//return -1;
}
printf("POINT: 289\n");

if((((((!(a25==1)&&(a11==1))&&(a28==10))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 290\n");
printf("%d",-1);//return -1;
}
printf("POINT: 291\n");

if(((((((a25==1)&&!(a11==1))&&(a28==9))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("POINT: 292\n");
printf("%d",-1);//return -1;
}
printf("%d",-2);//return -2;
}

int input, output;

int main()
{
kappa = 0;
// default output
int output = -1;

// main i/o-loop

for (int FLAG=0;FLAG<BOUND;FLAG++) {
printf("POINT: 294\n");
int symb; scanf("%d",&symb);

// operate eca engine
output = calculate_output(symb);
        printf("%d",symb);

}
return 0;

}

