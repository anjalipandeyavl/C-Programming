// program to convert string into uppercase
	#include<stdio.h>
		int i,len=0; // global variable
	  char* getUpperCase(char str[])
	  {
	    printf("enter string : ");
		  scanf("%[^\n]s",str);		
		  printf("String : %s\n",str);
		  while(str[len]!='\0')
		  {
			  len++;
		  }
		  
		  for(i=0;i<len;i++)
		  {
		    if(str[i]>=97 && str[i]<=122)
		      str[i] = str[i] - 32;
		  }
		  
		  return str;
	  }
	void main()
	{
		char *ptr,str[50];
		ptr = getUpperCase(str);
		printf("String in uppercase : %s\n",ptr);
	}
