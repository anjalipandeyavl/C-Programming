#include<stdio.h>
int fact(int n)
{
if(n==0)
  return 1;
else
return n*fact(n-1);



}

void main()
{
int num;
printf("enter number : ");
scanf("%d",&num);

printf("factorial : %d\n",fact(num));
}
