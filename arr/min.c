#include<stdio.h>
void main()
{
int i,arr[50],size,min;
printf("\enter size");
scanf("%d",&size);

printf("\n enter array element \n");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
min=arr[0];
printf("\n array element are : \n");
for(i=0;i<size;i++)
{
if(min>arr[i])
min=arr[i];
printf("%d\t",arr[i]);
}
printf("\nminimum element  : %d\n",min);

}
