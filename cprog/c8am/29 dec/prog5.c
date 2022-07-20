	/*
	1
	123
	12345
	1234567
	123456789
	*/
	#include<stdio.h>
	void main()
	{
		int row,i,j;
			printf("Enter row : ");
			scanf("%d",&row);
		for(i=1;i<=row;i++)
		{	
			for(j=1;j<=2*i-1;j++)
			{
					printf("%d",j);
		 }
		 printf("\n");
	 }
	}
