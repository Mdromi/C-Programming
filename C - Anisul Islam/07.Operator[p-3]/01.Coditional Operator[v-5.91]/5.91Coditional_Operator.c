//num1 ? num2 :num2

#include <stdio.h>

int main()
{
    int num1, num2, large;

    printf("Enter two numbers ");
    scanf("%d %d",&num1, &num2);

    large = (num1 > num2) ? num1 : num2;

    printf("Large number = %d\n",large);

    return 0;
}
