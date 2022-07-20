#include<stdio.h>
void main()
{
int i,arr[50],size,count=0,temp=0;

printf("\enter size");
scanf("%d",&size);

printf("\n enter array element \n");
   for(i=0;i<size;i++)
    {
scanf("%d",&arr[i]);
  }
printf("\n array element are : \n");

for(i=0;i<size;i++)
{
 printf("%d\t",arr[i]);
}

for(i=0;i<size;i++)
{
	if(arr[i]%2==0) 
	count++;
	if(arr[i]%2==1)
	temp++;

}

printf("no of even element :");
printf("%d\t",count);

printf("no of odd element :");
printf("%d\t",temp);

}
