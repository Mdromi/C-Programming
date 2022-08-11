#include<stdio.h>
int main()
{
    int T, r, i, temp, n, count, sum;

    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {
        scanf("%d",&n);

        temp = n;
        count = 5;
        sum = 0;

        while(temp != 0)
        {
            r = temp % 10;

            if(count == 5 || count == 1)
            {
                sum = sum + r;
            }
            temp = temp / 10;
            count --;
        }
        printf("Sum = %d\n",sum);

    }


    return 0;
}

