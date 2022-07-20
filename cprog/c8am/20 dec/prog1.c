	// program showing th concept of nested if else statement
	#include<stdio.h>
	void main()
	{
		int a,b;
			printf("enter values of a and b : ");
			scanf("%d%d",&a,&b);
			
			if(a==b)
				printf("Both are equal\n");
			else
			{
				if(a>b)
					printf("%d is greater\n",a);
				else
					printf("%d is greater\n",b);
			}
	}
