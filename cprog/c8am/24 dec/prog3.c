	// program to check whether entered number is perfect or not
	#include<stdio.h>
	void main()
	{
		int i,num,sum=0;
		printf("enter number : ");
		scanf("%d",&num);
		
		for(i=1;i<=num/2;i++)
		{
			if(num%i==0)
				sum=sum+i;
		}
		if(sum==num)
			printf("perfect number\n");
		else
			printf("not a perfect number\n");
	}
