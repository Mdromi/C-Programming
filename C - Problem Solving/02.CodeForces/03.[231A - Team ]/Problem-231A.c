#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, Petya, Vasya, Tonya, j, count, counts = 0;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d %d %d", &Petya, &Vasya, &Tonya);
        count =0;
        if(Petya == 1)
        {
            count++;
        }
        if(Vasya == 1)
        {
            count++;
        }
        if(Tonya == 1)
        {
            count++;
        }
        if(count >=2)
        {
            counts++;
        }
    }

    printf("%d\n",counts);

    return 0;
}



