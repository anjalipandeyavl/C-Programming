	// program showing the concept of switch control statement
	 #include<stdio.h>
	 void main()
	 {
	 int a,b;
	 char code;	
	 	printf("enter values of a and b : ");
	 	scanf("%d%d",&a,&b);
	 	getchar();
	 	printf("\nSelect Code\n");
	 	printf("+ for add\n");
	 	printf("- for sub\n");
	 	printf("e for exit\n");
	 	
	 	printf("Enter code : ");
	 	scanf("%c",&code);
	 	
	 		switch(code)
	 		{
	 			case '+' : printf("sum : %d\n",a+b);
	 								break;
	 			case '-' : printf("sub : %d\n",a-b);
	 								break;
	 			case 'e' : printf("Visit again\n");
	 									break;
	 			default : printf("Invalid selection\n");
	 								break;              
	 		}
	 }	

