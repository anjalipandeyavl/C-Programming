	// program showing the concept of structure
	#include<stdio.h>
	struct Student
	{
		int rno;
		float per;
		char name[50];
	};
	void main()
	{
		struct Student s={101,78.89,"Andrew anderson"};
		printf("Roll Number : %d\n",s.rno);
		printf("Name : %s\n",s.name);
		printf("Percentage : %.2f\n",s.per);
	}
