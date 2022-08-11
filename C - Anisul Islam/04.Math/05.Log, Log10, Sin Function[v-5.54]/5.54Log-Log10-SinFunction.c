#include<stdio.h>
int main()
{
    double x, result;

    printf("Enter any number ");
    scanf("%lf",&x);

    result = log(x);
    printf("log(%.2lf) = %.2lf\n",x, result);

    result = log10(x);
    printf("log10(%.2lf) = %.2lf\n",x, result);

    result = exp(x);
    printf("exp(%.2lf) = %.2lf\n",x, result);

    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n",x, result);

    result = cos(x);
    printf("cos(%.2lf) = %.2lf\n",x, result);

    result = tan(x);
    printf("tan(%.2lf) = %.2lf\n",x, result);

    return 0;
}


