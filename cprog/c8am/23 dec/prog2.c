	//program to print table of a number
	#include<stdio.h>
	void main()
	{
	int i,num,t;
	printf("enter number : ");
	scanf("%d",&num);
	
		for(i=1;i<=10;i++)
		{
			t = num*i;
			printf("%d x %d = %d\n",num,i,t);
		}	
	}
