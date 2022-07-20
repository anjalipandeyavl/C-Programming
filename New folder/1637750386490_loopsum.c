#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("enter number : ");
scanf("%d",&n);
printf("first %d natural number are\n",n);
for(i=1;i<=n;i++)
{
printf("%d\n",i);
sum=sum+i;
}

printf("sum of natural no %d\n",sum);

}


