	// program to add two 2d array
	#include<stdio.h>
	void main()
	{
		int arr1[20][20],arr2[20][20],arr3[20][20],i,j,r,c;
		printf("enter rows and column : ");
		scanf("%d%d",&r,&c);
		
		printf("enter first array elements : ");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&arr1[i][j]);
			}
		}
	 printf("enter second array elements : ");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&arr2[i][j]);
			}
		}
		printf("\nfirst array elements are : \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",arr1[i][j]);
			}
			printf("\n");
		}
		printf("\nsecond array elements are : \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",arr2[i][j]);
			}
			printf("\n");
		}
		printf("\nresultant array after addition : \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				arr3[i][j] = arr1[i][j] + arr2[i][j];
				printf("%d\t",arr3[i][j]);
			}
			printf("\n");
		}

	}
