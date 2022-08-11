#include<stdio.h>
int main()
{
    int T,n,i,sum,sqrt_n;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d", &n);

        sqrt_n = sqrt(n);
        sum = 1;
        for(i=2; i<=sqrt_n; i++)
        {
            if(n%i == 0)
            {
                sum = (sum + i) + (n/i);
            }
        }

        if(n == sum)
        {
            printf("Yes, %d is a perfect number!\n",n);
        }
        else
        {
            printf("Yes, %d is not a perfect number!\n",n);
        }
    }



    printf("sqrt = %d\n",sqrt_n);



    return 0;
}



