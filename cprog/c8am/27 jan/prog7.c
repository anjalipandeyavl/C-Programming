	// program showing the concept of file
	#include<stdio.h>
	#include<stdlib.h>
	void main()
	{
		FILE *ptr;
		ptr = fopen("demo.txt","w");
		if(ptr == NULL)
		{
			printf("Error while dealing with a file\n");
			exit(0);
		}
		fputs("This is an example",ptr);
		fseek(ptr,8,SEEK_SET);
		fputs("C programming language",ptr);
	}
