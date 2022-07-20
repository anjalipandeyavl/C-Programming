	// program showing the concept of function
	#include<stdio.h>
	int addition()
	{
		int a,b;
			printf("enter values of a and b : ");
			scanf("%d%d",&a,&b);
				return a+b;
	}
	void main()
	{
	/*
		int res = addition();
		printf("sum : %d\n",res);
	*/
	printf("sum : %d\n",addition());
	}
