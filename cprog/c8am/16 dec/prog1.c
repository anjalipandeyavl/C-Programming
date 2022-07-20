	// program to find out average of three numbers

	#include<stdio.h>
	void main()
	{
		int a,b,c; // declare 
		float avg;
		printf("Enter value of a : ");
		scanf("%d",&a);
		
		printf("Enter value of b : ");
		scanf("%d",&b);
		
		printf("Enter value of c : ");
		scanf("%d",&c);
		
		avg = (a+b+c)/3.0;
		printf("Average : %.2f\n",avg);	
	}
	
	
