#include<stdio.h>
int terget_value(int a[], int numsSize, int target)
{
    int i, j, index[2];

    for(i = 0; i < numsSize; i++)
    {
        for(j= i+ 1; j<numsSize; j++)
        {
            if(i+j == target)
            {
                index[0] = i;
                index[1] = j;
                printf("[%d, %d]", index[i], index[j]);
                return index;
            }
        }
    }
}
int main()
{
    int a[] = {2, 7, 11, 15};

    int *index = terget_value(a,4,9);

    //printf("[%d, %d]", index[0], index[1]);

    return 0;
}
