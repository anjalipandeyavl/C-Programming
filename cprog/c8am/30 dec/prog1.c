	/*
		  *
		 **
		***
	 ****
	*****
	*/
	#include<stdio.h>
	void main()
	{
		int row,i,j,sp;
			printf("enter rows : ");
			scanf("%d",&row);
			
			for(i=1;i<=row;i++)
			{
				for(sp=1;sp<=row-i;sp++)
				{
					printf(" ");
				}
				for(j=1;j<=i;j++)
				{
					printf("*");
				}
				printf("\n");
			}
	}
