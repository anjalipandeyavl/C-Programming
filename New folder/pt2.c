#include<stdio.h>
void main()
{
int i,j,rows,sum=1;
printf("enter rows");
scanf("%d",&rows);
for(i=0;i<rows;i++)
{
sum=sum+i;
   for(j=0;j<sum;j++)
  {
   printf("*");
   }
printf("\n");
}

}
