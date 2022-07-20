// program to concat two strings
	#include<stdio.h>
	void main()
	{
		char str1[50],str2[50];
		int i,len1=0,len2=0;
		
		printf("enter first string : ");
		scanf("%[^\n]s",str1);
    getchar();
		printf("enter second string : ");
		scanf("%[^\n]s",str2);
		
		printf("First string : %s\n",str1);
		printf("Second string : %s\n",str2);

		while(str1[len1]!='\0')
		{
			len1++;
		}
		while(str2[len2]!='\0')
		{
			len2++;
		}
	  str1[len1] = ' ';
	  len1++;
		for(i=0;i<len2;i++)
		{
			str1[len1]=str2[i];
		  len1++;
		}
		str1[len1]='\0';
		printf("concat string : %s\n",str1);
	}
