	// program showing the concept of 2d array
	#include<stdio.h>
	void main()
	{
		int arr[2][2] = {{11,22},{44,55}},i,j,r=2,c=2;
		
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
