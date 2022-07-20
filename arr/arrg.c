#include<stdio.h>
void main()
{
int i,arr[50],size,first,last,count=0;
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
  if(arr[i]>=50)
  count++;
 printf("%d\t",arr[i]);
}
printf("\ncount : %d\n",count);

}

