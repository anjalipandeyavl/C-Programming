//program showing the concept of factorial no
#include<stdio.h>
void main()
{
int num,i,fact=1;
printf("enter number : ");
scanf("%d",&num);

for(i=1;i<=num;i++)
{
  fact=fact*i;
}
printf("factorial : %d\n",fact);
}
2
