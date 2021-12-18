#include<stdio.h>
int main()
{
int X, Y, Z;
scanf("%d",&X); 
scanf("%d",&Y); 
scanf("%d",&Z); 

if(!(X>50)&&Y==100&&!(Z<90)){printf("FOUND at %d \n ",__LINE__);}
if(!(X>50)&&Y==100&&Z<90){printf("FOUND at %d \n ",__LINE__);}
if(X>50&&!(Y==100)&&!(Z<90)){printf("FOUND at %d \n ",__LINE__);}
if(X>50&&!(Y==100)&&Z<90){printf("FOUND at %d \n ",__LINE__);}
if(X>50&&Y==100&&Z<90){printf("FOUND at %d \n ",__LINE__);}

if (((X > 50) && (Y == 100)) || (Z < 90)) {
printf("This is sample program\n");
}
return 0;
}
