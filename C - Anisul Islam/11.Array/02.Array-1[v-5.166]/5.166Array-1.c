//Array Definition
//Array Declaration
//Array Initialization

// DataType array_name [array_size];
#include<stdio.h>
int main()
{
    int num[10];

    num[0] = 10;
    num[1] = 10;
    num[2] = 20;
    num[3] = 30;
    num[4] = 40;

    int number[] = {10,20,30,40,50};

    int sum = num[0] + num[1] + num[2] + num[3] + num[4];

    printf("The sum is %d\n",sum);

    return 0;
}
