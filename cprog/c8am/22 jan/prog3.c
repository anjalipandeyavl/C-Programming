/*
	Macro
	-----
	Macro is a small fragment of code, which have been given a name.
	Macro is mainly used to define constant.
	
	There are two ways to define a macro : 
		a) Object like macro
		b) Function like macro
		
	In case of macro, macro template is replaced by macro expansion.
	Macro template is also termed as identifier whereas macro expansion is also termed as replacement text.
	*/
	#include<stdio.h>
	#define PI 3.14 // object like macro
	void main()
	{
		printf("value of PI : %.2f\n",PI);
	}
