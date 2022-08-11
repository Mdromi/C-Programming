#include<stdio.h>
int main()
{
    int ara1[] = {3, 1, 5, 2, 4};
    int ara2[5];

    int i, minimum, index_2, minimum_index;

    for(index_2 = 0; index_2 < 5; index_2++) // index_2 = 3
    {
        minimum = 10000;

        for(i = 0; i < 5; i++) // i = 2
        {
            if(ara1[i] < minimum) // minimum = 5
            {
                minimum = ara1[i]; // minimum = 5
                minimum_index = i; // minimum_index = 2
            }
        }

        ara1[minimum_index] = 10000; // ara1[1] = 10000; ara1[3] = 10000; ara1[0] = 10000; ara1[4] = 10000; ara1[2] = 10000;
        ara2[index_2] = minimum; // ara2{1, 2, 3, 4, 5}
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d\n",ara2[i]);
    }

    return 0;
}

