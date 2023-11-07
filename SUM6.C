#include<stdio.h>
#include<conio.h>

void main(){

int s1,s2,s3,s4,s5,s6,s7,s8;

float avg;
float per;
    clrscr();

   printf("Enter the marks of subject-1 :");
   scanf("%d",&s1);
    printf("Enter the mark of subject-2 :");
      scanf("%d",&s2);
    printf("Enter the mark of subject-3 :");
      scanf("%d",&s3);
    printf("Enter the mark of subject-4 :");
      scanf("%d",&s4);
    printf("Enter the mark of subject-5 :");
      scanf("%d",&s5);
       printf("Enter the mark of subject-6 :");
      scanf("%d",&s6);
       printf("Enter the mark of subject-7 :");
      scanf("%d",&s7);
       printf("Enter the mark of subject-8 :");
      scanf("%d",&s8);

   avg=s1+s2+s3+s4+s5+s6+s7+s8;
   printf("average of all subjects is %f\n",avg);

   printf("Enter the average value :");
   scanf("%f",&avg);

   per=(avg*100)/800;
   printf("persenteg is %f",per);



getch();
}