#include<stdio.h>
int main()
{
    double a, b, sum;

    printf("Enter a first double number: ");
    scanf("%lf", &a);

    printf("Enter a secound double number: ");
    scanf("%lf", &b);

    //scanf("%lf %lf", &a, &b);

    sum = a + b;

    printf("Sum is: %.3lf\n", sum);

    return 0;
}

