	/*
	A				65         64+1
	AB      65 66      64+1  64+2 
	ABC     65 66 67   64+1  64+2  64+3
	ABCD
	ABCDE
	*/
	#include<stdio.h>
	void main()
	{
		int row,i,j;
			printf("Enter row : ");
			scanf("%d",&row);
		for(i=1;i<=row;i++)
		{	
			for(j=1;j<=i;j++)
			{
					printf("%c",64+j);
		 }
		 printf("\n");
	 }
	}
