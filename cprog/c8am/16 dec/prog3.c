	// program to find out area of circle
	
	#include<stdio.h>
	// #define PI 3.14
	void main()
	{
		const float PI=3.14;
		float area,r;
		printf("Enter radius : ");
		scanf("%f",&r);
		
		area = PI*r*r;
		printf("Area : %.2f\n",area);	
	}
	
	
