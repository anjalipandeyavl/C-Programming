#include<stdio.h>
int power(int b,int e)

{
if(e==0)
  return 1;
else
return b*power(b,e-1);

}

void main()
{
int b,e,num,power;
printf("enter number : ");
scanf("%d",&power);

printf("factorial : %d\n",power(b,e));
}
