	// program showing the concept of string	
	#include<stdio.h>
	void main()
	{
		char str[6]={'h','e','l','l','o','\0'};
		int i;
		for(i=0;i<6;i++)
		{
			printf("str[%d] : %c address : %p\n",i,str[i],&str[i]);
		}
		
		printf("string : %s\n",str);
	}
