//program swap using without third variable
#include<stdio.h>
void main()
{
int a,b;

printf("enter number of a and b : ");
scanf("%d%d",&a,&b);
printf("before swapping\na :%d\nb :%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping\na :%d\nb :%d\n",a,b);

}
