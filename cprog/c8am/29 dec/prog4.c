	/*
	1
	23
	456
	78910
	*/
	#include<stdio.h>
	void main()
	{
		int row,i,j,a=1;
			printf("Enter row : ");
			scanf("%d",&row);
		
		for(i=1;i<=row;i++)
		{	
			for(j=1;j<=i;j++)
			{
					printf("%d",a++);
		 }
		 printf("\n");
	 }
	}
