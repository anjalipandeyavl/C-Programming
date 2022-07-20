	// program showing the concept of switch control statement
	 	
	 #include<stdio.h>
	 void main()
	 {
	 	int num;
	 		printf("enter number : ");
	 		scanf("%d",&num);
	 		
	 		switch(num%2)
	 		{
	 			case 0 : printf("Even number\n");
	 								break;
	 			case -1 :						
	 			case 1 : printf("Odd Number\n");
	 								break;
	 			default : printf("Invalid selection\n");
	 								break;
	 		}
	 }	
	 /*
	  -56%2  -(56%2)  -0   0 
	 	-57%2  -(57%2)  -1
	 */
	 
