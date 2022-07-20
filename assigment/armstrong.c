#include<stdio.h>
#include<math.h>
void main()
{
int num,rem,sum=0,temp,temp1,count=0;
printf("enter number to check : ");
scanf("%d",&num);
temp1=num;

temp=num;
while(num>0)
{
num = num/10;//153/10=15
count++;//1

}

while(temp>0)
{
rem=temp%10;//153%10=3,15%10=5,1%10=1
sum=sum+pow(rem,count);//0+pow(3,3=27),27+5*3=152,152+1=153
temp=temp/10;//153/10=15,15/10=1

}

if(temp1==sum)
printf("Armstrong ");
else
printf("Not armstong ");
}
