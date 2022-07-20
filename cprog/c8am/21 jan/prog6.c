	// program showing the concept of union
	#include<stdio.h>
	union Student
	{
		int rno;
		float per;
		char name[50];
	};
	void main()
	{
	union Student s;
		printf("Enter roll number : ");
		scanf("%d",&s.rno);
		getchar();
			printf("Roll Number : %d\n",s.rno);
	
		printf("Enter Name : ");
		scanf("%[^\n]s",s.name);
		printf("Name : %s\n",s.name);
			
		printf("Enter percentage : ");
		scanf("%f",&s.per);
			printf("Percentage : %.2f\n",s.per);
	}
