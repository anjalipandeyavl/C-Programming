#include<stdio.h>
void main()
{
int row,i,j,arr[20][20],r,c,sum=0;
printf("enter row and column : ");
scanf("%d%d",&r,&c);

printf("enter array element \n");
for(i=0;i<r;i++)
{
   for(j=0;j<c;j++)
    {
    scanf("%d",&arr[i][j]);
 }
}
  printf("\n array element are : \n");
   for(i=0;i<r;i++)
{
   for(j=0;j<c;j++)
    {
        
   printf("%d\t",arr[i][j]);
}
 printf("\n");
}
for(i=0;i<r;i++)
{
   for(j=0;j<c;j++)
    {
        if(i==j||i+j==r-1)
       sum=sum+arr[i][j];
}
}
printf("sum of element is %d",sum);
}
 


