#include<stdio.h>
void main()
{
int i,num,m,n;
printf("enter intial and final number :");
scanf("%d%d",&n,&m);
for(num=n;num<=m;num++)
{
  for(i=1;i<=num;i++)
{ 
  if(num%2==0)
     {
    printf("%d\t",num );
    } 
   break;
}
//if()
  //printf("%d\t",num);
}

}
