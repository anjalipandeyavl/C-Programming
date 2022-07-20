
	#include<stdio.h>
	#define PI 3.14 // object like macro
	#define area(r) PI*r*r // function like macro
	void main()
	{
		float r;
			printf("enter value of r : ");
			scanf("%f",&r);
			
			printf("area : %.2f\n",area(r));
	}
