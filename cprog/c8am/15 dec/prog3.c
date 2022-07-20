	// program showing the concept of conditional | ternary operator
	#include<stdio.h>
	void main()
	{
		int a=5,b=12,c;
		
		c = (a>b) ? a : b;
		printf("Greater number : %d\n",c);
	
		(a>b) ? printf("%d is greater\n",a) : printf("%d is greater\n",b);
	}
