// 1 + 2 + 3 + ...... + n

#include<stdio.h>
int main()
{
    int n, a = 1, sum = 0;

    printf("Enter the last number of the series: ");
    scanf("%d",&n);

    printf("1 + 2 + 3 + ..... + %d",n);

    while(a<=n) // a = 1
    {
        sum = sum + a; // sum = 15
        a = a + 1;
    }
    printf(" = %d\n",sum);


    return 0;
}

