	// program showing the concept of string	
	#include<stdio.h>
	void main()
	{
		char str[6]={'h','e','l','l','o','\0'};
		printf("str[0] : %c address : %p\n",str[0],&str[0]);
		printf("str[1] : %c address : %p\n",str[1],&str[1]);
		printf("str[2] : %c address : %p\n",str[2],&str[2]);
		printf("str[3] : %c address : %p\n",str[3],&str[3]);
		printf("str[4] : %c address : %p\n",str[4],&str[4]);
		printf("str[5] : %c address : %p\n",str[5],&str[5]);
	}
