#include<stdio.h>
void bubble_sort(int A[], int n)
{
    int i, j, temp, count;
    count = 0;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                count++;
            }
        }
        if(count == 0)
        {
            printf("%d\n", count);
            break;
        }
    }
}
int main()
{
    int n = 5, i;
    int a[] = {8, 2, 4, 1, 5};
    int b[] = {1, 2, 3, 4, 5};

    bubble_sort(a, n);

    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
