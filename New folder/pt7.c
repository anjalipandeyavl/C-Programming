#include<stdio.h>
void main()
{
int a=1,i,j,rows;
printf("enter rows");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
   for(j=1;j<=i;j++)
  {
  printf("%d",a++);
}   
printf("\n");

}

}
