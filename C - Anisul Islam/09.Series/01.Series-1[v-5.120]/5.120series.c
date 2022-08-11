// 1 + 2 + 3 + ...... + n

#include<stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter the last number of the series: ");
    scanf("%d",&n);

    printf("1 + 2 + 3 + ..... + %d",n);

    for(i = 1; i<=n; i = i + 1) // i = 5
    {
        sum = sum + i; // sum = 15
    }
    printf(" = %d\n",sum);


    return 0;
}
