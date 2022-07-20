#include<stdio.h>
void main()
{
int temp,i,arr[50],size;
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
for(i=0;i<size/2;i++)
{
   if(arr[i]!=arr[size-1-i])
     break;
}
 if(i==size/2)
printf("palindrone");
  else
 printf("not palindrone");  
{
 temp=arr[i];
arr[i]=arr[size-1-i];
arr[size-1-i]=temp;
}
printf("\n array element after reversing : \n");
for(i=0;i<size;i++)
{

  printf("%d\t",arr[i]);
}
}
