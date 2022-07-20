	// program showing the concept of function
	#include<stdio.h>
	int addition(int p,int q)
	{
		return p+q;
	}
	void main()
	{
		int a,b;
			printf("enter values of a and b : ");
			scanf("%d%d",&a,&b);
	
			printf("Sum : %d\n",addition(a,b));
	}
