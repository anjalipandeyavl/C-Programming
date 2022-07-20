	// program showing the concept of enum
	#include<stdio.h>
	/*
	enum week {sun=100,mon,tue,wed=500,thur,fri,sat=105};
	void main()
	{
	int i;
		for(i=sun;i<=sat;i++)
		{
			printf("%d\t",i);
		}
	}
	*/
	enum week {sun=-2,mon,tue,wed=500,thur=0,fri,sat=105};
	void main()
	{
	enum week day = wed;
	printf("day : %d\n",day);
	printf("sun : %d\n",sun);
	printf("mon : %d\n",mon);
	printf("tue : %d\n",tue);
	printf("thur : %d\n",thur);
	printf("fri : %d\n",fri);
	printf("sat : %d\n",sat);	
	}
