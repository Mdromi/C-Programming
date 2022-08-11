//base^exponent
//2^3 = 2*2*2 = 8
//2^4 = 2*2*2*2 = 16
//3^4 = 3*3*3*3 = 81
#include<stdio.h>

double calculatePower(double base, double exp)
{
    double result=1,i;

    for(i=1; i<=exp; i++)
    {
        result = result * base; //result = 27
    }

    return result;
    //printf("Result = %.0lf",result);
}

int main()
{
    double base,exp,resultPower;

    printf("Enter Base: ");
    scanf("%lf",&base);

    printf("Enter Exponent: ");
    scanf("%lf",&exp);

    //resultPower = pow(base,exp);

    //calculatePower(base,exp);
    resultPower = calculatePower(base,exp);

    printf("Result = %.0lf",resultPower);

    return 0;
}

