	// program showing the concept of string	
	#include<stdio.h>
	void main()
	{
		char str[50];
		int len=0,count=0;
		printf("enter string : ");
		scanf("%[^\n]s",str);

		printf("string : %s\n",str);
		while(str[len]!='\0')
		{
			if(str[len]==' ')
				count++;
			len++;
		}
		printf("\nlength of string : %d\n",len-count);
	}
