	// program showing the concept of function
	#include<stdio.h>
	
	// function definition
	void show()
	{
		printf("show method called..!!\n");
	}
	void display()
	{
		printf("display method called..!!\n");
		show();
	}
	
	void main()
	{
	printf("before calling\n");
		display(); // function calling
	printf("after calling\n");
	}
	
