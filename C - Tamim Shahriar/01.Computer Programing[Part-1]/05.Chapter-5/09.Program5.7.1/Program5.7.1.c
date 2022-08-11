// Farenheit to Celsius Temperature
#include<stdio.h>
int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in farenheit: ");
    scanf("%lf",&farenheit);

    celsius = (farenheit-32) / 1.8;
    printf("Temperature in celsius is: %.2lfc\n",celsius);


    return 0;
}

