	// program showing the concept of structure
	#include<stdio.h>
	typedef struct Student
	{
		int rno;
		float per;
		char name[50];
	}stud;
	void main()
	{
	stud s;
		printf("Enter roll number : ");
		scanf("%d",&s.rno);
		getchar();
		
		printf("Enter Name : ");
		scanf("%[^\n]s",s.name);
		
		printf("Enter percentage : ");
		scanf("%f",&s.per);
		
		printf("Roll Number : %d\n",s.rno);
		printf("Name : %s\n",s.name);
		printf("Percentage : %.2f\n",s.per);
	}
