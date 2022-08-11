#include<stdio.h>
int main()
{
    int num1, num2, sum1, sum2, sum3, sum4;

    printf("Please enter a number : ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    sum1 = num1 + num2;
    sum2 = num1 - num2;
    sum3 = num1 * num2;
    sum4 = num1 / num2;

    printf("%d + %d = %d\n", num1, num2, sum1);
    printf("%d - %d = %d\n", num1, num2, sum2);
    printf("%d * %d = %d\n", num1, num2, sum3);
    printf("%d / %d = %d\n", num1, num2, sum4);

    return 0;
}

