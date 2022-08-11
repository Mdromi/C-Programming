#include<stdio.h>
int main()
{
    int i, x, t, n;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&x, &n);

        if(x > n)
        {
            printf("Invalid!");
        }
        else
        {
            for(i=x; i<=n; i+=x)
            {
                printf("%d\n", i);
            }
        }

    }


    return 0;
}
