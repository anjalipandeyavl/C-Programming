	// progranm showing the concept of selection sort
	#include<stdio.h>
	void main()
	{
		int arr[50],size,i,temp,j;
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
		
		for(i=0;i<size;i++)
		{
			for(j=i+1;j<size;j++)
			{
				if(arr[i]>arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}	
		printf("\nArray elements in ascending order : \n");
		for(i=0;i<size;i++)
		{
			printf("%d\t",arr[i]);
		}

	}
	
	
	
	
	
	
	
	
