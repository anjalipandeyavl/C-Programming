#include<stdio.h>
void main()
{
int i,arr[50],size,sum=0;;
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
sum=sum+arr[i];

printf("%d\t",arr[i]);
}
printf("\nsum : %d\n",sum);

}
