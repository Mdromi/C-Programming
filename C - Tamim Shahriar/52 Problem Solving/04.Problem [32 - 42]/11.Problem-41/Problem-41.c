#include<stdio.h>
long long int fact(long long int n)
{
    long long int i, product = 1;

    for(i=1; i<=n; i++)
    {
        product *= i;
    }
    return product;
}
int main()
{
    int T;
    long long int n, i;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%lld", &n);

        double sum = 0.0;

        for(i=1; i<=n; i++)
        {
            sum += ( (double)i / fact(i) );
        }
        printf("%.4lf\n",sum);

    }


    return 0;
}


