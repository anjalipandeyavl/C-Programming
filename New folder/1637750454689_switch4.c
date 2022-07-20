//program showing the concept of increment
#include<stdio.h>
void main()
{
int i=1,num=10;
//1-->2
switch(i++)
{
case 1: num++;//10-->11
case 2: num++;//11-->12
case 3: ++num;//13
default : printf("num : %d\n",++num);//14
     break; 	 
}

}
