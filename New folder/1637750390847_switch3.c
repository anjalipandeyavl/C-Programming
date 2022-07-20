// program showing the concept of even number
#include<stdio.h>
void main()
{
int num;
printf("enter number  : ");
scanf("%d",&num);

switch(num%2)
{
case 0 : printf("even number\n");
           break;
case -1:
case 1 : printf("odd number \n");
           break;
default : printf("invalid selection\n");
           break;
}

}
