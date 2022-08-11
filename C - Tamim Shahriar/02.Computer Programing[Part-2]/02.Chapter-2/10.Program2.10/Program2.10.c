#include<stdio.h>
int main()
{
    int x = 100;
    int *p = NULL;

    printf("Value of x: %d\n", x); // x = 15

    p = &x;
    printf("Value of *p: %d\n", *p); // *p = 100


    return 0;
}




