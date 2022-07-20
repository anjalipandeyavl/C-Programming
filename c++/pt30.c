#include<stdio.h>
void main()
{
int i,j,row;
printf("enter row");
scanf("%d",&row);

 for(i=row;i>=1;i--)
   {
    for(j=row;j>=i;j--)
  {
   printf("%d",j);
  }
   printf("\n");
}
}
