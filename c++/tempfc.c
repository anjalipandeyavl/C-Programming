// C program to convert temperature from degree  fahrenheit to celsius
 #include <stdio.h>

int main()
{
    float celsius, fahrenheit; 
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
     celsius = ( fahrenheit-32)*5/9; 
    printf(" %.2f celsius\n ",celsius);

    return 0;
}
