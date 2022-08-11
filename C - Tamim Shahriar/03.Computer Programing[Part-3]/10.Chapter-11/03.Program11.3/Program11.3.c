#include<stdio.h>
int main()
{
    int i, x, j, n = 12, range = 10;
    int A[] = {3, 4, 1, 6, 2, 4, 9, 7, 8, 4, 2, 1};
    int count[range+1];

    for(i = 0; i < range+1; i++)
    {
        count[i] = 0;
    }

    //Counting Number Size
    for(i = 0; i < n ; i++)
    {
        x = A[i];
        count[x] = count[x]+1;
    }

    //Printing counting Condition
    for(i = 0; i < range+1; i++)
    {
        printf("index: %d, value : %d\n", i, count[i]);
    }

    x = 0;
    for(i = 0; i < n; i++)
    {
        if(count[i] >=1)
        {
            for(j = 1; j<= count[i]; j++)
            {
                A[x] = i;
                x++;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
