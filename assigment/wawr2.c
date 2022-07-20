#include<stdio.h>
int prime(int num)
{
int i;
for(i=2;i<=num/2;i++)
{
  if(num%2==0)
	  break;
}


if(i>num/2 && num>1)
	return printf("%d is an prime  number",num);
else
  return printf("%d is not an prime number ",num); 

}

void main()
{
int num;
printf("enter  number : ");
scanf("%d",&num);
    prime(num);
}
