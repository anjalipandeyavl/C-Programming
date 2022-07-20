#include<stdio.h>
void main()
{
int sp,i,j,rows;
printf("enter rows");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
   for(j=1;j<=i;j++)
  {
   printf("*");
   }
printf("\n");
}
for(i=rows-1;i>=1;i--)
{
   for(j=1;j<=i;j++)
  {
   printf("*");
   }
printf("\n");
} 

for(i=1;i<=rows;i++)
    {
    for(sp=1;sp<=rows-i;sp++)
    { 
      printf(" ");
          }
     for(j=i;j>=1;j--)
  {
    printf("*");
   }
    printf("\n");
 }

for(i=rows;i>=1;i--)
    {
    for(sp=1;sp<=rows-i;sp++)
    { 
      printf(" ");
          }
     for(j=1;j<=i;j++)
  {
    printf("*");
   }
    printf("\n");
 }
}
