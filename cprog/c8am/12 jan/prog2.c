	// program to pass 2d array in a function
	#include<stdio.h>
	int r=2,c=2; // global variable
	void printArray(int arr[20][20])
	{
	int i,j;
		printf("\nArray elements are : \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",arr[i][j]);
			}
			printf("\n");
		}
	}
	void main()
	{
		int arr[20][20]={{11,22},{33,44}};
			printArray(arr);
	}
