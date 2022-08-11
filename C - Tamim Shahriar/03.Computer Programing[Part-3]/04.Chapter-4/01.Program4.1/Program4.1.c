#include<stdio.h>
void selection_sort(int A[], int n)
{
    int i, j, index_min, temp;

    for(i = 0; i < n-1; i++)
    {
        index_min = i;

        //Finding the small number index
        for(j = i+1; j < n; j++)
        {
            if(A[j] < A[index_min]) // 3 < 2
            {
                index_min = j; //index_min = 2,2
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
    int n = 5, i;
    int a[] = {10, 5, 2, 8, 7};

    selection_sort(a, n);

    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");


    return 0;
}
