	// program showing the concept of pointer to an array
	#include<stdio.h>
	int size,i;
	int* getArray(int arr[])
	{
			printf("enter size of array : ");
			scanf("%d",&size);
			printf("\nEnter array elements : \n");
			for(i=0;i<size;i++)
			{
				scanf("%d",&arr[i]);
			}
			return arr;
	}
	void main()
	{
		int arr[50],*ptr;
			ptr = getArray(arr);
			printf("\nArray elements are : \n");
			for(i=0;i<size;i++)
			{
			printf("%d\t",*(ptr+i));
			}
	}
