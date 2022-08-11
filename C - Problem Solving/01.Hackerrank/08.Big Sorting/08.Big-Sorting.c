//https://www.hackerrank.com/challenges/big-sorting/

#include<stdio.h>

void selection_sort(long long int ara[], int n)
{
    int i, j, min_index, temp;

    for(i = 0; i<n-1; i++)
    {
        min_index = i;

        for(j=i+1; j < n; j++)
        {
            if(ara[j] < ara[min_index])
            {
                min_index = j;
            }
        }

        if(min_index != i)
        {
            temp = ara[i];
            ara[i] = ara[min_index];
            ara[min_index] = temp;
        }
    }
}

int main()
{
    long long int n, i;
    scanf("%d", &n);
    long long int ara[n];

    for(i = 0; i < n; i++)
    {
        scanf("%lld", &ara[i]);
    }

    selection_sort(ara, n);

    for(i = 0; i < n; i++)
    {
        printf("%lld\n", ara[i]);
    }


    return 0;
}
