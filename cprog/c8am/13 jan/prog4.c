	// program showing the concept of array of pointer
	#include<stdio.h>
	void main()
	{
		int arr[50],size,*ptr[50],i;
			printf("enter size of array : ");
			scanf("%d",&size);
			printf("\nEnter array elements : \n");
			for(i=0;i<size;i++)
			{
				scanf("%d",&arr[i]);
				ptr[i] = &arr[i];
			}
			printf("\nArray elements are : \n");
			for(i=0;i<size;i++)
			{
				printf("%d\t",*ptr[i]);
			}
	}
