#include<stdio.h>

void test_function(int ara[])
{
    ara[0] = 100;
    return;
}
int main()
{
    int ara[] = {1, 2, 3, 4, 5};

    printf("%d\n", ara[0]); // ara[0] = 1
    test_function(ara);
    printf("%d\n", ara[0]); // ara[0] = 100

    return 0;
}


