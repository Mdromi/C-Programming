#include<stdio.h>
int main()
{
    int ara1[5][5] = {{6, 4, 7, 8, 9}, {3, 7, 1, 9, 9}, {8, 6, 4, 2, 7},
                   {2, 4, 2, 5, 9}, {4, 1, 6, 7, 3}};

    int ara2[5][5];

    int r, c;

    printf("Content of first array (ara1): \n");

    for(r = 0; r < 5; r++)
    {

        for(c = 0; c < 5; c++)
        {
            printf("%d ", ara1[r][c]);
        }
        printf("\n");
    }

    printf("\n");

    // Now start copy
    for(r = 0; r < 5; r++)
    {
        for(c = 0; c < 5; c++)
        {
            ara2[c][r] = ara1[r][c];
        }
    }

    printf("Content of second array (ara2): \n");

    for(r = 0; r < 5; r++)
    {
        for(c = 0; c < 5; c++)
        {
            printf("%d ", ara2[r][c]);
        }
        printf("\n");
    }


    return 0;
}

