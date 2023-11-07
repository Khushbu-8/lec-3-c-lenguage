#include<stdio.h>
#include<conio.h>

void main(){

int p,r,t;
float intrest;

clrscr();



     printf("enter the principaln amount:");
     scanf("%d",&p);
     printf("enter the value of rate per ammun :");
     scanf("%d",&r);
     printf("enter the value of time :");
     scanf("%d",&t);

       intrest=(p*r*t)/100;

     printf("enter value of intrest is %f",intrest);

getch();
}