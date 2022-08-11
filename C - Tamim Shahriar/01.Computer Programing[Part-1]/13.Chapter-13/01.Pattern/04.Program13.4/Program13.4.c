#include<stdio.h>
int main()
{
    int row, col, n;

    printf("Enter number of row: ");
    scanf("%d", &n);

    // Loop to print upper half of the pattern
    for(row=1; row<=n; row++)
    {
        for(col=row; col<=n; col++)
        {
            printf("*");
        }
        for(col=1; col<=(2*row-2); col++)
        {
            printf(" ");
        }
        for(col=row; col<=n; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Loop to print lower half of the pattern
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("*");
        }

        for(col=(2*row-2); col<(2*n-2); col++)
        {
            printf(" ");
        }

        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}

