#include<stdio.h>
#define PI 3.14
void main()
{
int l,b,num,square;
flot area,r;
char code;
printf("select code\n :");
printf("s\S for square number\n ");
printf("c\C for area of circle\n ");
printf("r\R for area of rectangle\n ");

printf("enter code\n");
scanf("%c",&code);

switch(code)
{ 
case 's':
case 'S' :
printf("enter value :\n");
scanf("%d",&num);
square=num*num;
printf("square number is %d\n ",square);
      break;


case 'c':
case 'C' :
printf("enter value :\n");
scanf("%f",&area);
area=PI*r*r;
printf("area of circlei s %f\n ",area);
      break;
case 'r':
case 'R' :
printf("enter value i and b :\n");
scanf("%f%f",&l,&b);
printf("area of rectangle is %d\n ",l*b);
      break;
default:
printf("invalid selection \n :");
}


}
