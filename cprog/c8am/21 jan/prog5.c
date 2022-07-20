	// program showing the concept of Array of structure
	#include<stdio.h>
	struct Student
	{
		int rno;
		float per;
		char name[50];
	};
	void main()
	{
	struct Student s[50];
	int i,num;
	
	printf("enter number of students : ");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		printf("Enter roll number : ");
		scanf("%d",&s[i].rno);
		getchar();
		
		printf("Enter Name : ");
		scanf("%[^\n]s",s[i].name);
		
		printf("Enter percentage : ");
		scanf("%f",&s[i].per);
	}
	printf("\n  student details  \n");
	for(i=0;i<num;i++)
	{
		printf("\nRoll Number : %d\n",s[i].rno);
		printf("Name : %s\n",s[i].name);
		printf("Percentage : %.2f\n",s[i].per);
	}
	}
