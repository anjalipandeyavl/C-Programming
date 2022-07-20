	// program to find out the sum of diagonal elements
	#include<stdio.h>
	void main()
	{
		int arr[20][20],i,j,r,c,sum=0;
		printf("enter rows and columns : ");
		scanf("%d%d",&r,&c);
		if(r==c)
		{	
		printf("\nEnter Array elements : \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		printf("\nArray elements are : \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				//if(i==j)
				if(i+j==r-1)	
					sum = sum + arr[i][j];
				printf("%d\t",arr[i][j]);
			}
			printf("\n");
		}
		printf("\nsum : %d\n",sum);
		}
		else
			printf("sum not possible\n");
	}
