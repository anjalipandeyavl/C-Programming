#include<stdio.h>
void main()
{
int term,a=-1,b=1,c,i;
printf("enter number of term : ");
scanf("%d",&term);
for(i=1;i<=term;i++)
{
c=a+b;
  printf("%d\t",c);
a=b;
b=c;

}

}
