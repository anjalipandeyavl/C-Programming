	// progranm to reverse an array
	#include<stdio.h>
	void main()
	{
		int arr[50],size,i,temp;
		printf("enter size of array : ");
		scanf("%d",&size);
		
		printf("enter array elements : ");
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}
		
		printf("\nArray elements are : \n");
		for(i=0;i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
		for(i=0;i<size/2;i++)
		{
			temp=arr[i];
			arr[i] = arr[size-1-i];
			arr[size-1-i] = temp;
		}	
		
		printf("\nArray elements after reversing : \n");
		for(i=0;i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
	}
