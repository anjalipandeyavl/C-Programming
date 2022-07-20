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
		struct Student s={101,56.67,"Andrew anderson"};
		ptr = fopen("demo.txt","w");
		if(ptr == NULL)
		{
			printf("Error while dealing with a file\n");
			exit(0);
		}
		fwrite(&s,sizeof(struct Student),1,ptr);
		printf("Data inserted successfully\n");
	}
