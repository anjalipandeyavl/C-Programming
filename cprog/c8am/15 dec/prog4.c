	// program showing the concept of logical operator
	#include<stdio.h>
	void main()
	{
		int a=100;
		
		(a>1 && a<50) ? printf("statement 1\n") : printf("statement 2\n");
		(a>1 || a<50) ? printf("statement 1\n") : printf("statement 2\n");
	  printf("!0 : %d\n",!0);
	  printf("!1 : %d\n",!1);
	  printf("!455 : %d\n",!455);
	  printf("!54.54 : %d\n",!54.54);
	  printf("!a : %d\n",!'a');
	  printf("!hello : %d\n",!"hello"); 
	}
