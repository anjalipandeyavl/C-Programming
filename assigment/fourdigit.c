#include<stdio.h>
void main()
{
int sum=0,num,middle,last,first,i;
printf("enter number : ");
scanf("%d",&num);

if(num>999 && num<10000)
{
first=num/1000;
last=num%10;
sum=first+last;
printf("sum of first and last number is %d\n",sum);

}
else
printf("not a four difit number :\n");

}
