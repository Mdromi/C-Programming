#include<stdio.h>
int main()
{
    int namta[10][10];
    int row, col, value;
    int even = 0, odd = 0, sum = 0;

    //Calculate Namta
    for(row=0; row<10; row++)
    {
        for(col=0; col<10; col++)
        {
            namta[row][col] = (row+1) * (col+1);
        }
    }

    //Printing Namta
    for(row=0; row<10; row++)
    {
        for(col=0; col<10; col++)
        {
            printf("%d x %d = %d\n", (row+1), (col+1), namta[row][col]);
        }
        printf("\n");
    }

    //Get Even Odd or sum
    for(row=0; row<10; row++)
    {
        for(col=0; col<10; col++)
        {
            value = namta[row][col];

            if(value % 2 == 0)
            {
                even++;

            }else
            {
                odd++;
            }
            sum = sum + value;
        }
    }

    printf("Even number = %d\n", even);
    printf("Odd number = %d\n", odd);
    printf("Sum of the numta = %d\n", sum);


    return 0;
}

