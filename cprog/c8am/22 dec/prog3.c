	// program showing the concept of switch control statement
	 #include<stdio.h>
	 void main()
	 {
	 	int i=1,num=10;
	 				//  1---->2
	 		switch(i++)
	 		{
	 			case 3 : num++;
	 			case 4 : ++num;
	 			case 1 : num++; // 10-->11
	 			case 2 : num++; // 11-->12
	 			default : printf("num : %d\n",num++);
	 								break;              // 12-->13
	 		}
	 }	

