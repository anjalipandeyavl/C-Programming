#include<stdio.h>
void main()
{
int i,arr[3][3]={{1,2,3},{4,5,6}},r=2,c=3,j;

printf("\n enter array element \n");
   for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
{
 printf("%d\t",arr[i][j]);
}
 printf("\n");
}
}
