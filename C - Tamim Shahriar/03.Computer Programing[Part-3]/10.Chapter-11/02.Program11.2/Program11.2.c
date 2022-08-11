#include<stdio.h>

int partition(int A[], int low, int high)
{
    int pivot, i, j, t;
    pivot = A[high];

    for(i = low-1, j = low; j < high; j++)
    {
        if(A[j] < pivot)
        {
            i += 1;

            t = A[j];
            A[j] = A[i];
            A[i] = t;
        }
    }

    t = A[high];
    A[high] = A[i+1];
    A[i+1] = t;

    return i+1;
}

void quick_sort(int A[], int low, int high)
{
    if(low >= high)
    {
        return;
    }

    int p;

    p = partition(A, low, high);

    quick_sort(A, low, p-1);
    quick_sort(A, p+1, high);
}

int main()
{
    int i, n = 8;
    int A[] = {1, 5, 6, 3, 5, 8, 7, 2, 9};

    quick_sort(A, 0, n);

    for(i = 0; i <= n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
