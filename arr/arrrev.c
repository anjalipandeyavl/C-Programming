#include<stdio.h>
void main()
{
int i,rem,rev=0,arr[50],size,temp;
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

printf("\narray element after reversing\n");
for(i=0;i<size;i++)
{
temp=arr[i];
rev=0;
while(temp>0)
{
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
}
 printf("%d\t",rev);

}
}
