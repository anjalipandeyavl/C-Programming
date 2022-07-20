#include<stdio.h>
void main()
{
 int n,i;
printf("enter number : ");
scanf("%d",&n);
 printf("%d even number\n",n);
for(i=1;i<=n;i++)
{
printf("%d\t",2*i);
}
printf("\n even number upto %d\n",n);
for(i=1;i<=n/2;i++)

printf("%d\t",2*i);
}

