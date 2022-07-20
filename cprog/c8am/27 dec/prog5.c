	// program showing the concept of do while loop
	
	#include<stdio.h>
	void main()
	{
		int num,sum=0;
		char ch;
		do
		{
			printf("enter number : \n");
			scanf("%d",&num);
			getchar();
			sum=sum+num;
		printf("do you want to continue?\nIf yes .. press y/Y : ");
		scanf("%c",&ch);
		}while(ch=='y' || ch=='Y');
		printf("\nsum : %d\n",sum);
}
