	// program to count number of digits
	#include<stdio.h>
	void main()
	{
		int num,count=0;
		printf("enter number : ");
		scanf("%d",&num);
		while(num>0)
		{
			count++;
			num=num/10;
		}	
			printf("Number of digits : %d\n",count);
			printf("Number : %d\n",num);
}
