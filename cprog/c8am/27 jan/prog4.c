	// program showing the concept of file
	#include<stdio.h>
	#include<stdlib.h>
	void main()
	{
		FILE *ptr;
		char str[500];
		ptr = fopen("demo.txt","r");
		if(ptr == NULL)
		{
			printf("Error while dealing with a file\n");
			exit(0);
		}
		fscanf(ptr,"%[^\n]s",str);
		printf("Data : %s\n",str);
	}
