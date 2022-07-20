#include<stdio.h>
void main()
{
int i,arr[50],size,first,last,sum=0;
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
first=arr[0];
last=arr[size-1];
sum=first+last;

 printf("%d\t",arr[i]);
}
printf("\nsum : %d\n",sum);

}

