	// program showing the concept of file
	#include<stdio.h>
	#include<stdlib.h>
	void main()
	{
		FILE *ptr;
		char str[500];
		printf("Enter string : ");
		scanf("%[^\n]s",str);
		
		ptr = fopen("demo.txt","w");
		if(ptr == NULL)
		{
			printf("Error while dealing with a file\n");
			exit(0);
		}
		fprintf(ptr,"%s",str);
		printf("Data inserted successfully..!!\n");
	}
