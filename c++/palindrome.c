#include<stdio.h>
void main()
{
int rem,num,rev=0,temp;
printf("enter number : ");
scanf("%d",&num);
temp=num;
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;

}
if(temp==rev)
printf("number is palindrome\n");
else
printf("not palindrome\n");

}
