#include<stdio.h>
int main()
{
    int a, b, sum;

    printf("Enter a first number: ");
    scanf("%d", &a);

    printf("Enter a secound number: ");
    scanf("%d", &b);

    //scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum is: %d\n", sum);

    return 0;
}
