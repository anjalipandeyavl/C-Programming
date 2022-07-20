	// program showing the concept of string(reverse a string)	
	#include<stdio.h>
	void main()
	{
		char str[50],temp;
		int i,len=0;
		printf("enter string : ");
		scanf("%[^\n]s",str);

		printf("string : %s\n",str);
		while(str[len]!='\0')
		{
			len++;
		}
		for(i=0;i<len/2;i++)
		{
			temp=str[i];
			str[i] = str[len-1-i];
			str[len-1-i] = temp;
		}
		printf("reverse string : %s\n",str);
	}
