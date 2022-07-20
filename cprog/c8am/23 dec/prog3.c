	//program to find out factorial of a number
	#include<stdio.h>
	void main()
	{
	int i,num,fact=1;
	printf("enter number : ");
	scanf("%d",&num);
	
		for(i=1;i<=num;i++)
		{
			fact = fact*i;
		}
			printf("Factorial = %d\n",fact);
	}
