#include<stdio.h>


int factorial(int num)
{
int fact=1,i;
for(i=1;i<=num;i++)
{
 fact=fact*i;
}
 return fact;
}


void main()
{
int num;
printf("enter number :");
scanf("%d",&num);
 printf("fact : %d\n",factorial(num));
}
