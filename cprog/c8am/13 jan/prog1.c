	// program showing the concept of pointer
	#include<stdio.h>
	void main()
	{
		int a,*ptr,**ptr1;
			printf("enter value of a : ");
			scanf("%d",&a);
			
			printf("value of a : %d\n",a);
			printf("address of a : %p\n",&a);
			
			ptr = &a;
			printf("address of ptr : %p\n",&ptr);
			printf("address which ptr holds : %p\n",ptr);
			printf("value which *ptr holds : %d\n",*ptr);
	
			ptr1 = &ptr;
			printf("address of ptr1 : %p\n",&ptr1);
			printf("address which ptr1 holds : %p\n",ptr1);
			printf("address at address which *ptr1 holds : %p\n",*ptr1);
			printf("value which **ptr1 holds : %d\n",**ptr1);
	}
