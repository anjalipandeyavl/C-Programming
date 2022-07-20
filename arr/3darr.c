#include<stdio.h>
void main()
{
int arr[2][3][3]={{1,2,3,4,5,6,7,8,9},{9,8,7,6,5,4,3,2,1}},i,j,k;
 printf("\n array element are :\n");
for(i=0;i<2;i++)
  {
   for(j=0;j<3;j++)
   {
    for(k=0;k<3;k++)
    {
     printf("%d\t",arr[i][j][k]);
    }
     printf("\n");
    }
     printf("\n");
}

}
