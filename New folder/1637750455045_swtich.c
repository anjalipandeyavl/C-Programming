	#include<stdio.h>
void main()
{
int a,b,c,choice;
printf("\n 1. press 1 for addition");
printf("\n 2. press 2 for subtrsction");
printf("\n enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter 2 number");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d",c);
break;
case 2:
printf("enter 2 number");
scanf("%d%d",&a,&b);
c=a-b;
printf("%d",c);
break;
default:
printf("you have passed a wrong key");
}
}
