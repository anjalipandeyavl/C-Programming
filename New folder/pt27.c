#include<stdio.h>
void main()
{
int i,j,row,sp;
printf("enter row");
scanf("%d",&row);

for(i=1;i<=5;i++)
{
  for(j=1;j<=5;j++)
   {
if(i==1||i==3||j==1||j==5)
{
printf(" *");
}
else
printf(" ");

}
}

}
