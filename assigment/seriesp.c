#include<stdio.h>
int main()
{
int i,n;
float sum=1;
printf("Enter the number :  ");
scanf("%d",&n);

printf("The numbers are : 1");
for(i=2;i<=n;i++)
{
sum=sum+1/i;

printf(" 1/%d+ ",i);
}
printf("Sum is  :%.2f ",sum);
}
