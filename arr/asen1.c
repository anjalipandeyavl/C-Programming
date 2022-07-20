#include<stdio.h>
void main()
{
int j,temp,first,last,middle,search,i,arr[50],size;
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
   if(arr[i]>arr[j])
{ 
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("\n array element in ascending order : \n");
for(i=0;i<size;i++)
{
  printf("%d\t",arr[i]);
}
printf("enter element search : ");
scanf("%d",&search);

 first=0;
last=size-1;
while (first<=last)
{
middle=(first+last)/2;
if(arr[middle]<search)
first=middle+1;

else if (arr[middle]>search)
last=middle-1;

else if(arr[middle]==search)
{
printf("element found at position : %d\n",middle+1);
break;
}
else
printf("element not found");
}
}
