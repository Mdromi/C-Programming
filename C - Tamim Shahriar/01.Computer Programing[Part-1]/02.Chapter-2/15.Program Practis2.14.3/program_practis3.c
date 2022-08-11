#include<stdio.h>
int main()
{
    int num1, num2, sum1, sum2, sum3, sum4;
    char addition, subtraction, multiply, dividion;

    addition = '+';
    subtraction = '-';
    multiply = '*';
    dividion = '/';

    printf("Please enter a number : ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    sum1 = num1 + num2;
    sum2 = num1 - num2;
    sum3 = num1 * num2;
    sum4 = num1 / num2;

    printf("%d %c %d = %d\n", num1, addition, num2, sum1);
    printf("%d %c %d = %d\n", num1, subtraction, num2, sum2);
    printf("%d %c %d = %d\n", num1, multiply, num2, sum3);
    printf("%d %c %d = %d\n", num1, dividion, num2, sum4);

    return 0;
}


