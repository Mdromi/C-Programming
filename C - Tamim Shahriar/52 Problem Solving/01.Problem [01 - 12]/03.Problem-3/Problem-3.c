#include<stdio.h>
int main()
{
    int i,count = 0, x;
    x = 1000;

    for(i = x; i>=1; i--)
    {
        if(i == x-5)
        {
            printf("\n");
            x = x-5;
        }
        printf("%d\t",i);
        count++;

    }

    return 0;
}
