	// program showing the concept of switch control statement
	 #include<stdio.h>
	 void main()
	 {
	 int code,a,b;
	 	printf("enter values of a and b : ");
	 	scanf("%d%d",&a,&b);
	 	
	 	printf("\nSelect Code\n");
	 	printf("1 for add\n");
	 	printf("2 for sub\n");
	 	printf("3 for exit\n");
	 	
	 	printf("Enter code : ");
	 	scanf("%d",&code);
	 	
	 		switch(code)
	 		{
	 			case 1 : printf("sum : %d\n",a+b);
	 								break;
	 			case 2 : printf("sub : %d\n",a-b);
	 								break;
	 			case 3 : printf("Visit again\n");
	 									break;
	 			default : printf("Invalid selection\n");
	 								break;              
	 		}
	 }	

