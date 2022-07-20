	// program showing the concept of switch case
	#include<stdio.h>
	void main()
	{
	int num;
	printf("Enter case : ");
	scanf("%d",&num);
		switch(num)
		{
			case 1 : printf("case 1 selected\n");
								break;
			case 2 : printf("case 2 selected\n");
								break;
			default : printf("Invalid selection\n");
							break;	
		}
	}
