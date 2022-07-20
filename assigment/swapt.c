//program swap using third variable
#include<stdio.h>
void main()
{
int a,b,temp;
printf("enter number of a and b : ");
scanf("%d%d",&a,&b);
printf("before swapping\na :%d\nb :%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("after swapping\na :%d\nb :%d\n",a,b);

}
