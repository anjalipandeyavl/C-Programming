//program showing the concept of else if ladder
#include<stdio.h>
void main()
{
 char ch;
printf("enter character : ");
scanf("%c",&ch);
if(ch>=65 && ch<=90)
printf("character is in upper case : ");
else if(ch>='a' && ch<='z')
printf("character is in lower case\n");
else if(ch>=48 && ch<=57)
 printf("character is a digit\n");
else
printf("not matched\n");
}
