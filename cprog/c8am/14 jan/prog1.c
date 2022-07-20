	// program showing the concept of pointer to an array
	#include<stdio.h>
	void main()
	{
		int arr[50],size,*ptr,i;
			printf("enter size of array : ");
			scanf("%d",&size);
			printf("\nEnter array elements : \n");
			for(i=0;i<size;i++)
			{
				scanf("%d",&arr[i]);
			}
			ptr = arr; // ptr = &arr[0];
			printf("\nArray elements are : \n");
			for(i=0;i<size;i++)
			{
			/*
				printf("%d\t",*ptr);
				ptr++;
			*/
			printf("%d\t",*(ptr+i));
			}
	}
