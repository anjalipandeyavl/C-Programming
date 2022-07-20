	// program showing the concept of enum
	#include<stdio.h>
	enum week {sun,mon,tue,wed,thur,fri,sat};
	void main()
	{
	int i;
		for(i=sun;i<=sat;i++)
		{
			printf("%d\t",i);
		}
	}
