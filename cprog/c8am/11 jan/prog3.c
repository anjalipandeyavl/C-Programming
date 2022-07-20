	// program showing the concept of multidimensional array
	#include<stdio.h>
	void main()
	{
int arr[2][3][3]={
										{
											{1,2,3},
											{4,5,6},
											{5,6,7}
										},
										{
											{2,2,3},
											{4,5,6},
											{6,7,8}
										}
								 },i,j,k;
		printf("\n array elements are : \n");
		for(k=0;k<2;k++)
		{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",arr[k][i][j]);
			}
			printf("\n");
		}
		printf("\n");
		}
	}
