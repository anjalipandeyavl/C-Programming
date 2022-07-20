// program showing the concept of string handling function
	#include<stdio.h>
	#include<string.h>
	void main()
	{
	  char str1[50]="Andrew",str2[50]="MATHEW",str3[50],str4[50]="Abc",str5[50] = "abc";
	  printf("length : %lu\n",strlen(str1));
	  printf("copy : %s\n",strcpy(str3,str1));
	  printf("concat : %s\n",strcat(str1,str2));
	  printf("compare : %d\n",strcmp(str4,str5));
	 /*
	  printf("reverse : %s\n",strrev(str3));
	  printf("uppercase : %s\n",strupr(str1));
	  printf("lowercase : %s\n",strlwr(str2));
	  */
	}
