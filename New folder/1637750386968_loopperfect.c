//program showing the concept of perfect no not
#include<stdio.h>
void main()
{
int num,i,sum=0;
printf("enter number : ");
scanf("%d",&num);

for(i=1;i<=num/2;i++)
{
  if(num%i==0)
sum=sum+i;
}
if(sum==num)
printf("number is perfect/n");    
else
printf("number is not perfect/n");
}
