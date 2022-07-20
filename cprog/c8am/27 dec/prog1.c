	// program to check whether entered number is palindrome or not
	#include<stdio.h>
	void main()
	{
		int temp,num,rem,rev=0;
		printf("enter number : ");
		scanf("%d",&num);
		temp=num;
		for(;num>0;)
		{
			rem = num%10;
			rev=rev*10+rem;
			num=num/10;
		}	
		if(temp==rev)
			printf("Palindrome Number\n");
		else
			printf("Not palindrome Number\n");
}
