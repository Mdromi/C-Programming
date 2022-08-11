#include<stdio.h>
int main()
{
    int row, col, n;

    printf("Enter number of row: ");
    scanf("%d", &n);

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf("  ");
        }
        for(col=1; col<=row; col++)
        {
            printf("C ");
        }
        printf("\n");
    }
    for(row=2; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf("  ");
        }
        for(col=1; col<=row; col++)
        {
            printf("C ");
        }
        printf("\n");
    }


    return 0;
}

