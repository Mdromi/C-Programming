#include<stdio.h>
int main()
{
    int i, T, num, temp, rev;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&num);
        rev = 0;

        while(num != 0)
        {
            temp = num % 10;
            rev = rev*10 + temp;
            num = num / 10;
        }
        printf("%d\n",rev);

    }


    return 0;
}


