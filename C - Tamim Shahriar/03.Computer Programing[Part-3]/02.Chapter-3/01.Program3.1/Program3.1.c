#include<stdio.h>

int linear_searc(int A[], int n, int x)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(A[i] == x)
        {
            return i;
        }
    }

    i = -1;
    return i;
}
int main()
{
    int ara[] = {6, 7, 0, 2};
    int n = 4;
    int findNumber = 6;
    int result;

    result = linear_searc(ara, n, findNumber);
    if(result == -1)
    {
        printf("The number is not define\n");
    }
    else
    {
        printf("The number is define\n");
    }


    return 0;
}
