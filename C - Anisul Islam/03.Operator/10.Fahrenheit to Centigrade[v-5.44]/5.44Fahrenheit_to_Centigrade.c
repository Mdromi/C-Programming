// C = (F - 32) / 1.8;
#include<stdio.h>
int main()
{
    float C,F;

    printf("Enter Fahrenheit : ");
    scanf("%f",&F);

    C = (F - 32) / 1.8;

    printf("Centigrade = %.2f\n",C);


    return 0;

}

