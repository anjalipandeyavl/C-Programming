	// progranm to search an element from an array(binary search)
	#include<stdio.h>
	void main()
	{
		int arr[50],size,i,search,first,last,middle;
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
		first=0;
		last=size-1;
		middle=(first+last)/2;
		
		printf("enter element to be search : ");
		scanf("%d",&search);
		
		while(first<=last)
		{
			if(arr[middle]<search)
				first=middle+1;
			else if(arr[middle]==search)
			{
				printf("element found at position : %d\n",middle+1);
				break;
			}
			else 
				last=size-1;
			
			middle = (first+last)/2;
		}
		if(first>last)
			printf("element not found");
				
	}
	
	
	
	
	
	
	
	
