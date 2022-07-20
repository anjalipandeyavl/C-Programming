	// program showing th concept of nested if else statement
	#include<stdio.h>
	void main()
	{
	char ch;
	int age;
			printf("enter nationality(i/I) for Indian : ");
			scanf("%c",&ch);
			
			if(ch=='i' || ch=='I')
			{
				printf("Enter age : ");
				scanf("%d",&age);
				
					if(age>=18)
						printf("eligible to vote\n");
					else
						printf("not eligble to vote\n");		
			}
			else
					printf("Not an Indian\n");
	}
