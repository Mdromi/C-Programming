#include<stdio.h>
#include<time.h>

void fnc(int x, int n)
{
    x = n * 2;
}

int main()
{
    int i, j, n, x, y;
    clock_t start_time, end_time;
    double time_elapsed;

    start_time = clock();

    n = 12345678;
    y = 1000000000;
    for(i = 0 ; i < y; i++)
    {
        for(j = 0; j < 10; j++)
        {
            x = x * 2;
        }
    }

    end_time = clock();
    time_elapsed = (double) (end_time - start_time) / CLOCKS_PER_SEC;
    printf("Time: %lf seconds\n", time_elapsed);

    //2nd time
    start_time = clock();

    n = 12345678;
    for(i = 0 ; i < y; i++)
    {
        for(j = 0; j < 10; j++)
        {
            fnc(x, n);
        }
    }

    end_time = clock();
    time_elapsed = (double) (end_time - start_time) / CLOCKS_PER_SEC;
    printf("Time: %lf seconds\n", time_elapsed);

    return 0;
}
