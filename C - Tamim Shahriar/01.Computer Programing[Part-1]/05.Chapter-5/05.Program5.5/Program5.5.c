#include<stdio.h>
int main()
{
    int n,sum;

    printf("Enter last number: ");
    scanf("%d",&n);

    sum = (n*(n+1)) / 2;
    printf("Summation is %d\n",sum);

    return 0;
}



