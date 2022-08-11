#include <stdio.h>

int main()
{
    int a, b, c;

    a = 32;
    b = 12;

    c = a & b;
    printf("a & b = %d\n",c);

    c = a | b;
    printf("a | b = %d\n",c);

    c = a ^ b;
    printf("a ^ b = %d\n",c);

    return 0;
}

