#include<stdio.h>
void main()
{
int i,j,rows;
printf("enter rows");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
   for(j=1;j<=2*i-1;j++)
  {
   printf("%c",64+j);
   }
printf("\n");
}

}
