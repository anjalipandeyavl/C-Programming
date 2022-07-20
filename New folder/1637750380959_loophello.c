#include<stdio.h>
void main()
{
int n,i,sum=0,hello;
printf("enter number : ");
scanf("%d",&n);
printf("first %d natural number are\n",n);
for(i=1;i<=n;i++)
{
 if(i%5==0)
printf("hello\n");
else
printf("%d\n",i);
}
}


