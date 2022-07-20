#include<stdio.h>
void main()
{
int i,j,rows,sp;
printf("enter rows");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
   for(sp=1;sp<=rows-i ;sp++)
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
