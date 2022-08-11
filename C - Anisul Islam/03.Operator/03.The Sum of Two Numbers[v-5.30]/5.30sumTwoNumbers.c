//Write a program that sum two numbers
#include<stdio.h>
int main()
{
    int num1, num2, sum;

    printf("Enter Two Numbers: ");
    scanf("%d %d",&num1, &num2);

    sum = num1 + num2;

    printf("%d + %d = %d",num1, num2, sum);

    return 0;
}
