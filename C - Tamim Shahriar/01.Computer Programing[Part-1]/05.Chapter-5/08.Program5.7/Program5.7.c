// Celsius to Farenheit Temperature
#include<stdio.h>
int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in celsius: ");
    scanf("%lf",&celsius);

    farenheit = (celsius*1.8) + 32;
    printf("Temperature in farenheit is: %.2lff\n",farenheit);


    return 0;
}
