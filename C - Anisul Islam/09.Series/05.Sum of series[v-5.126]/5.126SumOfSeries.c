// 1 + 2 + 3 + ...... + n
// 1 + 3 + 5 + ...... + n
// 2 + 4 + 6 + ...... + n
// 1 + 4 + 7 + ...... + n

#include<stdio.h>
int main()
{
    int n,i,sum = 0;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i = 1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("Sum = %d\n",sum);



    return 0;
}
