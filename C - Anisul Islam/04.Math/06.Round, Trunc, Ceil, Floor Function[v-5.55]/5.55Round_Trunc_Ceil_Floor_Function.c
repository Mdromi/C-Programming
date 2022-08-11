#include<stdio.h>
int main()
{
    double x, result;

    printf("Enter any number ");
    scanf("%lf",&x);

    result = round(x);
    printf("round(%.2lf) = %.2lf\n",x, result);

    result = trunc(x);
    printf("trunc(%.2lf) = %.2lf\n",x, result);

    result = ceil(x);
    printf("ceil(%.2lf) = %.2lf\n",x, result);

    result = floor(x);
    printf("floor(%.2lf) = %.2lf\n",x, result);

    return 0;
}



