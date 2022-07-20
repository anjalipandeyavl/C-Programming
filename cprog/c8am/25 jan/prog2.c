	// program showing the concept of calloc()
	#include<stdio.h>
	#include<stdlib.h>
	void main()
	{
		int i,num,*ptr;
		printf("Enter number of elements : ");
		scanf("%d",&num);

		ptr = (int*)calloc(num,sizeof(int));
		printf("enter elements : ");
		for(i=0;i<num;i++)
		{
			scanf("%d",ptr+i);
		}
		
		printf("\nelements are : \n");
		for(i=0;i<num;i++)
		{
			printf("%d\t",*(ptr+i));
		}
		free(ptr);
	}
