	// program to reverse a three digit number
	#include<stdio.h>
	void main()
	{
		int num,last,first,middle,rev;
		printf("enter three digit number : ");
		scanf("%d",&num);
		
		if(num>99 && num<1000)
		{
			last = num%10;
			middle=(num/10)%10;
			first=num/100;
			
			rev = last*100+middle*10+first*1;
			printf("Reverse Number : %d\n",rev);
		}
		else
			printf("not a three digit number\n");
	}
