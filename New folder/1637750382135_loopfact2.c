//program showing the concept of perfect no
#include<stdio.h>
void main()
{
int num,i;
printf("enter number : ");
scanf("%d",&num);

for(i=1;i<=num;i++)
{
  if(num%i==0)
printf("%d\t",i);
}
}
