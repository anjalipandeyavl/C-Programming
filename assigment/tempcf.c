// C program to convert temperature from degree celsius to fahrenheit
 #include <stdio.h>

int main()
{
    float celsius, fahrenheit;
   printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf(" %.2f Fahrenheit\n ", fahrenheit);
}
