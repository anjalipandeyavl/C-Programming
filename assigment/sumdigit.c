#include<stdio.h>
void main()
{
int i,num,sum=0;
printf("enter number : ");
scanf("%d",&num);
printf("first %d natural number are\n",num);
for(i=1;i<=num;i++)
{
printf("%d\n",i);
sum=sum+i;
}
printf("sum of number %d\n",sum);
}
