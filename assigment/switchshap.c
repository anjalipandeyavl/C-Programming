//program showing the concept of switch control statment
#include<stdio.h>
void main()
{
int l,b;
char code;
float r,area;
printf("\nselect code : \n");
printf("R/r for area of rectangle\n : \n");
printf("C/c for circle : \n");
printf("E/e for exit: \n");

 printf("enter code ; ");
 scanf("%c",&code);

switch(code)
{
case 'r' :
case 'R' :
printf("enter value of l and b : ");
scanf("%d%d",&l,&b);
printf("area of rectangle:%d",l*b);
     break;
case 'c' :
case 'C' :
printf("enter radius : ");
scanf("%f",&r);
printf("area of circle  : %.2f\n",3.14*r*r);
     break;
case 'e':
case 'E':
printf("mind your language");
    break;
    default :
printf("invalid selection\n");
 }
}
