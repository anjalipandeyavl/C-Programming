	// progranm to search an element from an array(linear search)
	#include<stdio.h>
	void main()
	{
		int arr[50],size,i,search;
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
		
		printf("enter element to be search : ");
		scanf("%d",&search);
		
		for(i=0;i<size;i++)
		{
				if(arr[i]==search)
				{
					printf("Element found at position : %d\n",i+1);
					break;
				}
		}
		if(i==size)
			printf("element not found");
				
	}
	
	
	
	
	
	
	
	
