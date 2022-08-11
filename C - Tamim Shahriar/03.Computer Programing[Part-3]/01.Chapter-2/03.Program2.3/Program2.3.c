#include<stdio.h>
int main()
{
    int n, result;
    scanf("%d", &n);

    result = 0;

    for(int i = 1; i<=n; i++)
    {
        result = result + i;
    }
    printf("result = %d\n", result);

    return 0;
}
