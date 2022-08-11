#include<stdio.h>
int main()
{
    int number[5][5] = {{6, 4, 7, 8, 9}, {3, 7, 1, 9, 9}, {8, 6, 4, 2, 7},
                   {2, 4, 2, 5, 9}, {4, 1, 6, 7, 3}};

    int row, col, value, sumRow, sumCol;

    sumRow = 0;
    sumCol = 0;

    // Sum of row value
    for(row = 0; row < 5; row++)
    {
        for(col = 0; col < 5; col++)
        {
            //value = number[row][col];
            sumRow = sumRow + number[row][col];
        }
        printf("Sum of row %d: %d\n", row+1, sumRow);
        sumRow = 0;
    }

    printf("\n");

    // Sum of Column value
    for(row = 0; row < 5; row++)
    {
        for(col = 0; col < 5; col++)
        {
            //value = number[row][col];
            sumCol = sumCol + number[col][row]; // ara[row][col]
        }
        printf("Sum of column %d: %d\n", row+1, sumCol);
        sumCol = 0;
    }

    return 0;
}
