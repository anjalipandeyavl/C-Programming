#include<stdio.h>
void main()
{
int i,j,arr[20][20],r,c;
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
}
