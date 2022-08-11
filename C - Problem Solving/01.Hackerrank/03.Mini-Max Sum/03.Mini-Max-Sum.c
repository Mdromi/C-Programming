#include<stdio.h>

void selection_sort(long int A[], long int n)
{
    long int i, j, index_min, temp;

    for(i = 0; i < n-1; i++)
    {
        index_min = i;

        //Finding Minimum Index Value
        for(j = i+1; j < n; j++)
        {
            if(A[j] < A[index_min])
            {
                index_min = j;
            }
        }

        if(index_min != i)
        {
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
    }
}

int main()
{
    long int i, a[5], sum = 0;
    long int min = 0, max = 0;

    for(i=0; i<5; i++)
    {
        scanf("%ld", &a[i]);
        sum = sum + a[i];
    }

    selection_sort(a, 5);
    min = a[0];
    max = a[4];


    printf("%ld %ld", (sum - max), (sum - min));

    return 0;
}
