#include<stdio.h>
int main()
{
    int num1 = 10;
    int num2 = 5;

    num1 = num1 - num2; //5
    num2 = num1 + num2; //10
    num1 = num2 - num1; //5

    printf("Num1 = %d\n",num1);
    printf("Num2 = %d\n",num2);

    return 0;
}

