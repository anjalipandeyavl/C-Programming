	// program showing the concept of realloc()
	#include<stdio.h>
	#include<stdlib.h>
	void main()
	{
		int i,num,*ptr;
		printf("Enter number of elements : ");
		scanf("%d",&num);

		ptr = (int*)calloc(num,sizeof(int));
		printf("\nAddress of elements : \n");
		for(i=0;i<num;i++)
		{
			printf("%p\n",ptr+i);
		}
		printf("Enter new size : ");
		scanf("%d",&num);
	
		ptr = realloc(ptr,num*sizeof(int));
		
		printf("\nAddress of newly allocated elements : \n");
		for(i=0;i<num;i++)
		{
			printf("%p\n",ptr+i);
		}
		free(ptr);
	}
