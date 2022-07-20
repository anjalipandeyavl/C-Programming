	// progranm to find out minimum element from an array
	#include<stdio.h>
	void main()
	{
		int arr[50],size,i,min;
		printf("enter size of array : ");
		scanf("%d",&size);
		
		printf("enter array elements : ");
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}
		min = arr[0];
		
		printf("\nArray elements are : \n");
		for(i=0;i<size;i++)
		{
			if(min>arr[i])
				min=arr[i];
			printf("%d\t",arr[i]);
		}
	printf("Minimum element : %d\n",min);
	}
