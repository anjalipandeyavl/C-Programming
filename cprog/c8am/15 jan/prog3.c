	// program showing the concept of string	
	#include<stdio.h>
	void main()
	{
		char str[50],str1[50];
		int i;
		printf("enter name : ");
		scanf("%s",str);
		getchar();
		printf("enter Full name : ");
		scanf("%[^\n]s",str1);
		// gets(str1);
		printf("string : %s\n",str);
		printf("string : %s\n",str1);

	}
