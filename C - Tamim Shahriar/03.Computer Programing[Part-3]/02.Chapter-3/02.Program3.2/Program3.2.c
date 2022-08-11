#include<stdio.h>

int binary_search(int A[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n - 1;

    while(left <= right)
    {
        mid = (left + right)  / 2;

        if(A[mid] == x)
        {
            return mid;
        }

        if(A[mid] < x )
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int ara[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int n, x, result;

    n = 11;
    x = 6;

    result = binary_search(ara, n, x);

    if(result == -1)
    {
        printf("The number is not define\n");
    }
    else
    {
        printf("The number is define\n", result);
    }

    return 0;
}
