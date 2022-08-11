#include<stdio.h>
void insert_sort(int A[], int n)
{
    int i, j, item;

    for(i = 1; i < n; i++)
    {
        item = A[i];
        j = i - 1;

        while(j >= 0 && A[j] > item)
        {
            A[j+1] = A[j];
            j = j - 1;
        }

        A[j+1] = item;
    }
}
int main()
{
    int n = 5, i;
    int a[] = {5, 2, 3, 1, 4};

    insert_sort(a, n);

    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
