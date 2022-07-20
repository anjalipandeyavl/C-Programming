	// program showing the concept of array
	#include<stdio.h>
	void main()
	{
		int arr[5] = {1,2,3,4,5},i;
		for(i=0;i<5;i++)
		{
			printf("arr[%d] : %d address : %p\n",i,arr[i],&arr[i]);
		}
	}
