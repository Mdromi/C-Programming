#include<stdio.h>
int main()
{
    int T,n,i,sum,sqrt_n,num;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d", &n);

        for(num = 2; num <= n; num++)
        {
            sqrt_n = sqrt(num);
            sum = 1;
            for(i=2; i<=sqrt_n; i++)
            {
                if(num%i == 0)
                {
                    sum = (sum + i) + (num/i);
                }
            }

            if(num == sum)
            {
                printf("%d\n",num);
            }
        }
    }



    return 0;
}




