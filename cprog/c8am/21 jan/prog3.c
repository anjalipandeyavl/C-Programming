	// program showing the concept of structure
	#include<stdio.h>
	struct Student
	{
		int rno;
		float per;
			struct Name
			{
				char name[50];
			}nm;
	}s;
	void main()
	{
		printf("Enter roll number : ");
		scanf("%d",&s.rno);
		getchar();
		
		printf("Enter Name : ");
		scanf("%[^\n]s",s.nm.name);
		
		printf("Enter percentage : ");
		scanf("%f",&s.per);
		
		printf("Roll Number : %d\n",s.rno);
		printf("Name : %s\n",s.nm.name);
		printf("Percentage : %.2f\n",s.per);
	}
