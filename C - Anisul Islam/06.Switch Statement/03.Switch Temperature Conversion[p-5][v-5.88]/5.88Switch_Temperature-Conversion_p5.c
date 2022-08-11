//Switch Keyword : switch, case, break, default
//Switch Statement | Menu Based Temperature Conversion
#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedTemp;

    printf("Temperature Conversion Menu\n");
    printf("1. Fahrenheit to Celsius \n");
    printf("2. Celsius to Fahrenheit \n");

    printf("Enter your Choice\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            {
                printf("Enter the Fahrenheit temperature : \n");
                scanf("%f",&temp);
                convertedTemp = (temp-32)/1.8;
                printf("The temperature in Celsius is : %.2f\n",convertedTemp);
                break;
            }
            case 2:
            {
                printf("Enter the Celsius temperature : \n");
                scanf("%f",&temp);
                convertedTemp = (1.8*temp)+32;
                printf("The temperature in Fahrenheit  is : %.2f\n",convertedTemp);
                break;
            }
        default:
            printf("Not a correct option ! \n");
    }

    return 0;
}




