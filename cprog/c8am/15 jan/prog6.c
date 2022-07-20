	// program showing the concept of string(copying a string)	
	#include<stdio.h>
	void main()
	{
		char str[50],temp,str1[50];
		int i,len=0;
		printf("enter string : ");
		scanf("%[^\n]s",str);

		printf("string : %s\n",str);
		while(str[len]!='\0')
		{
			len++;
		}
		for(i=0;i<len;i++)
		{
			str1[i]=str[i];
		}
		str1[i]='\0';
		printf("copied string : %s\n",str1);
	}
