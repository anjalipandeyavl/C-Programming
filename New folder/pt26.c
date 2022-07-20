#include<stdio.h> 

void main() 
{
    int space,row,i,j;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("\n");

    for( i = 1; i <= row; i++)
    {   
        for( space = 1; space <= row - i; space++)
        {
            printf("  ");
        }


        for( j = 1; j <= i * 2 - 1; j++)
        {

            if (j == 1 || (j == i * 2 - 1) || i == row )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");            
            }            
        }               

        printf("\n");
    }

 }
