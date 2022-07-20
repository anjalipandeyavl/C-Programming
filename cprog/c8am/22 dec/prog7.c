	// program showing the concept of switch control statement
	 #include<stdio.h>
	 void main()
	 {
	 int l,b;
	 float r;
	 char code;	
	 	printf("\nSelect Code\n");
	 	printf("r/R for area of rectangle\n");
	 	printf("c/C for area of circle\n");
	 	printf("e/E for exit\n");
	 	
	 	printf("Enter code : ");
	 	scanf("%c",&code);
	 	
	 		switch(code)
	 		{
	 			case 'r' : 
	 			case 'R' : 
	 				 	printf("enter values of l and b : ");
	 					scanf("%d%d",&l,&b);
			 			printf("area : %d\n",l*b);
	 								break;
	 								
	 			case 'c' :
	 			case 'C' : 
	 				 	printf("enter radius : ");
	 					scanf("%f",&r);
			 			printf("area : %.2f\n",3.14*r*r);
	 								break;
	 								
	 			case 'E' : 
	 			case 'e' : printf("Visit again\n");
	 									break;
	 			default : printf("Invalid selection\n");
	 								break;              
	 		}
	 }	

