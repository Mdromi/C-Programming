#include<stdio.h>
int main()
{
    int ara[] = {3, 1, 5, 2, 4};

    int i, j, length, temp = 0;

    //Calculate length of array ara
     length = sizeof(ara)/sizeof(ara[0]);

    //Displaying elements of original array
    printf("Elements of original array: \n");

    for(i = 0; i < length; i++)
    {
        printf("%d ",ara[i]);
    }

    //Sort the array in ascending order
    for(i = 0; i < length; i++) // i = 1 = 3
    {
        for(j = i + 1; j < length; j++) // j = 3
        {
            if(ara[i] > ara[j]) // 3 > 2
            {
                temp = ara[i]; // temp = 3
                ara[i] = ara[j]; // ara0 = 1, ara1 = 2,
                ara[j] = temp; // ara1 = 3, ara3 = 3
            }
        }
    }

    printf("\n");


    //Displaying elements of array after sorting

    printf("Elements of array sorted in ascending order: \n");
    for(i = 0; i < length; i++)
    {
        printf("%d ",ara[i]);
    }

    return 0;
}


