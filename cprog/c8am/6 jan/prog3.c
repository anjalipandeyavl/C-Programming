	// program showing the concept of array
	#include<stdio.h>
	void main()
	{
		int arr[50],size,i;
		printf("enter size of array : ");
		scanf("%d",&size);
		printf("\nArray elements are : \n");
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("\nArray elements are : \n");
		for(i=0;i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
	}
