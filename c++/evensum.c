#include<stdio.h>
void main()
{
int num,i,sum=0;
printf("enter number : ");
scanf("%d",&num);

printf("\n even number upto %d\n",num);
for(i=1;i<=num*2;i++)
{
   if(i%2==0)
  {
    printf("%d\t",i);
    sum=sum+i;
  }
}
printf("\nsum of  given number : %d\n",sum);


}
