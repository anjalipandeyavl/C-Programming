#include<stdio.h>
void main()
{
int salary,ta,da,pf,gs,ns;
printf("enter the basic salary : ");
scanf("%d",&salary);
 ta=(salary/100);
pf=(salary*7.8)/100;
da=500;
gs=salary+da+ta;
ns=gs-pf;
printf("gross salary : %d\n\n",gs);
printf("salary structure : \nta=%d\tpf=%d\tda=%d\n\n",ta,pf,da);
printf("net salary in hand : %d\n\n",ns);
}

