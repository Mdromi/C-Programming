#include<stdio.h>
int main()
{
    double pi = 3.1415926358;

    int *ptr;

    ptr = &pi;

    printf("Value of pi : %lf\n", pi);
    printf("Value of pi : %lf\n", *ptr);


    return 0;
}

