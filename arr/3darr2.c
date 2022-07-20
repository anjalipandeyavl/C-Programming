#include<stdio.h>
int size=6;
void printfvalue(int arr[])
{
int i;
printf("\n array element are :\n");
for(i=0;i<size;i++)
{
printf("%d\t",arr[i]);
}
}
void main()
{
int arr[]={1,2,3,4,5,6};
printfvalue(arr);

}
