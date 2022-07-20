	// program showing the concept of file
	#include<stdio.h>
	#include<stdlib.h>
	struct Student
	{
		int rno;
		float per;
		char name[50];
	};
	void main()
	{
		FILE *ptr;
		struct Student s;
		ptr = fopen("demo.txt","r");
		if(ptr == NULL)
		{
			printf("Error while dealing with a file\n");
			exit(0);
		}
		fread(&s,sizeof(struct Student),1,ptr);
		printf("Roll Number : %d\n",s.rno);
		printf("Percentage : %.2f\n",s.per);
		printf("Name : %s\n",s.name);
	}
