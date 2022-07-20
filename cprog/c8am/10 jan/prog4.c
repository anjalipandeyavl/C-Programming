	// program to transpose 2d array 
	#include<stdio.h>
	void main()
	{
		int arr[20][20],i,j,r,c;
		printf("enter rows and columns : ");
		scanf("%d%d",&r,&c);
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
				printf("%d\t",arr[i][j]);
			}
			printf("\n");
		}
		printf("\nArray elements after transposing : \n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
				printf("%d\t",arr[j][i]);
			}
			printf("\n");
		}
	}
