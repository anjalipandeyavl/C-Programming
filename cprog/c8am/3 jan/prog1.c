	// program showing the concept of function
	#include<stdio.h>
	void display(); // function declaration
	void main()
	{
	printf("before calling\n");
		display(); // function calling
		display();
		display();
	printf("after calling\n");
	}
	// function definition
	void display()
	{
		printf("display method called..!!\n");
	}
