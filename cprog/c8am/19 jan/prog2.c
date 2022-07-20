// program to compare two strings
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

		if(len1==len2)
		{
		  for(i=0;i<len1;i++)
		  {
        if(str1[i]!=str2[i])
          break;   
		  }
		  if(i==len1)
		    printf("string matched..!!\n");
		   else
		    printf("string not mathed..!!\n");
		}
		else
		  printf("String not matched..!!\n");
	}
