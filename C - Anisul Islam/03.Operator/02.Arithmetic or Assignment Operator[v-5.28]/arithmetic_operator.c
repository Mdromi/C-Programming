//Write a program that takes two integer and display sum
#include<stdio.h>
int main()
{
    int num1,num2,sum,result;
    float avg;
    char ch;

    printf("Enter two numbers: ");
    scanf("%d %d",&num1, &num2);

    sum = num1 + num2;
    ch = '+';
    printf("%d %c %d = %d\n",num1, ch, num2, sum);

    result = num1 - num2;
    ch = '-';
    printf("%d %c %d = %d\n",num1, ch, num2, result);

    result = num1 * num2;
    ch = '*';
    printf("%d %c %d = %d\n",num1, ch, num2, result);

    result = num1 / num2;
    ch = '/';
    printf("%d %c %d = %d\n",num1, ch, num2, result);

    result = num1 % num2;
    ch = '%';
    printf("%d %c %d = %d\n",num1, ch, num2, result);

    avg = (float)sum / 2; //Type Casting
    printf("The average is: %.2f\n",avg);

    return 0;
}
