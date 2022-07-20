#include<stdio.h>
int even(int n,int m,int num)
{
for(num=n;num<=m;num++)
{
  if(num%2==0)
	printf("%d\t",num);
}

}

void main()
{
int num,n,m;
printf("enter intial and final number : ");
scanf("%d%d",&n,&m);
    even(n,m,num);
}
