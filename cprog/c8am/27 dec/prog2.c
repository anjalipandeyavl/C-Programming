	// program to check whether entered number is armstrong or not
	#include<stdio.h>
	#include<math.h>
	void main()
	{
		int temp,temp1,count=0,num,rem,sum=0;
		printf("enter number : ");
		scanf("%d",&num);
		temp=num;
		temp1=num;
		
		while(num>0)
		{
			num=num/10;
			count++;
		}
		while(temp>0)
		{
			rem = temp%10;
			sum=sum+pow(rem,count);
			temp=temp/10;
		}	
		
		if(temp1==sum)
			printf("Armstrong Number\n");
		else
			printf("Not armstrong Number\n");
}
