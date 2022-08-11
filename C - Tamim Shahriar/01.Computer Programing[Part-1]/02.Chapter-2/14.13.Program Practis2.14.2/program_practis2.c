#include<stdio.h>
int main()
{
    double num1, num2, sum1, sum2, sum3, sum4;

    printf("Please enter a double number : ");
    scanf("%lf", &num1);

    printf("Please enter another double number: ");
    scanf("%lf", &num2);

    sum1 = num1 + num2;
    sum2 = num1 - num2;
    sum3 = num1 * num2;
    sum4 = num1 / num2;

    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, sum1);
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, sum2);
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, sum3);
    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, sum4);

    return 0;
}


