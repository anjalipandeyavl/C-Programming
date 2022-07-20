 #include<stdio.h>
void main()
{
int year,leap;
printf("enter year\n");
scanf("%d",&year);
if((year%4==0 && year%100!=0) || (year%400==0)?
   printf("this is  leap year\n"):printf("this is not leap year\n "));   

}
