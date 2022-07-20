	// program to print prime numbers between two entered numbers
	#include<stdio.h>
	void main()
	{
		int n,m,num,i;
			printf("Enter initial and final number : ");
			scanf("%d%d",&n,&m);
		
		for(num=n;num<=m;num++)
		{	
			for(i=2;i<=num/2;i++)
			{
				if(num%i==0)
					break;
			}
			if(i>num/2 && num>1)
				printf("%d\t",num);
	 }
	}
