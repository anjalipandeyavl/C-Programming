	// program showing the concept of storage class
	#include<stdio.h>
	void myFun()
	{
		static int a=1;
			printf("a : %d\n",a);
			a++;
	}
	void main()
	{
		myFun();
		myFun();
		myFun();
	}
