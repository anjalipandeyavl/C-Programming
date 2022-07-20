	// program showing the concept of function
	#include<stdio.h>
	void addition(int p,int q)
	{
		printf("sum : %d\n",p+q);	
	}
	void main()
	{
		int a,b;
			printf("enter values of a and b : ");
			scanf("%d%d",&a,&b);
	
			addition(a,b);
	}
