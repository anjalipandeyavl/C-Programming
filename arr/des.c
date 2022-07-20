#include<stdio.h>
void main()
{
int j,temp,i,arr[50],size;
printf("\enter size of array");
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
  for(j=i+1;j<size;j++)
{
   if(arr[i]<arr[j])
{ 
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("\n array element in descending order : \n");
for(i=0;i<size;i++)
{
  printf("%d\t",arr[i]);
}
}

