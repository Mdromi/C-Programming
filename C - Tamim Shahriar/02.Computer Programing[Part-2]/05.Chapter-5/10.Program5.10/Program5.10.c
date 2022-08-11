#include<stdio.h>
#include<limits.h>
int main()
{
    int n = sizeof(int) * CHAR_BIT;
    int num, count, i;

    scanf("%d", &num);
    count = 0;

    for(i =0; i < n; i++)
    {
        if(num & (1 << i)) count++;
    }
     printf("Number of 1: %d\n", count);

    return 0;
}

