 #include<stdio.h>
int r=2,c=2;
void printvalue(int arr[2][2])
{
int i,j;
printf("\n array element are :\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",arr[i][j]);
}

}

void main()
{
int arr[2][2]={{1,2},{3,4}};
printvalue(arr);
}
}
