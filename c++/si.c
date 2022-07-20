//program showing the concept of simple interst
#include<stdio.h>
void main()
{
float amount,principle,rate,time,si;
printf("enter value of principle,rate and time\n : ");
scanf("%f%f%f",&principle,&rate,&time);

si=(principle*rate*time)/100;
printf("simple interest is %.2f\n",si);
amount=si-principle;
printf("amount is %.2f\n",amount);
}

