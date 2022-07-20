	// program showing the concept of function
	#include<stdio.h>
	
	// function declaration
	void show();
	// function definition
	void display()
	{
		printf("display method called..!!\n");
		show();
	}
	void show()
	{
		printf("show method called..!!\n");
	}
	
	void main()
	{
	printf("before calling\n");
		display(); // function calling
	printf("after calling\n");
	}
	
