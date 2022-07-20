#include<stdio.h>
void main()
{
int i,j,rows,sum=1;
printf("enter rows");
scanf("%d",&rows);
for(i=0;i<=rows;i++)
{
sum=sum+i;
printf("%d\t",sum);
   for(j=1;j<=sum;j++)
  {
   printf("*");
   }
printf("\n");
}

}
