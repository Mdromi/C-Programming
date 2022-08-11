#include<stdio.h>

double pi = 3.14;

void my_fnc()
{
    pi = 3.1416;
    return;
}
int main()
{
    printf("%lf\n", pi); // pi = 3.14
    my_fnc();
    printf("%lf\n", pi);// pi = 3.1416

    return 0;
}

