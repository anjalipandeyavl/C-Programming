#include<stdio.h>
void main()
{
int i,arr[50],size,max;
printf("\enter size");
scanf("%d",&size);

printf("\n enter array element \n");
for(i=0;i<size;i++)
    {
scanf("%d",&arr[i]);
  }
max=arr[0];
printf("\n array element are : \n");
for(i=0;i<size;i++)
{
if(max<arr[i])
max=arr[i];
printf("%d\t",arr[i]);
}
printf("\nmaximum element  : %d\n",max);

}
