#include<stdio.h>
int main()
{
    int T, i, j, n, m;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d %d", &n, &m);

        //printing first part
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
            {
                printf("%d ",m);
            }
            printf("\n");
        }

        //printing second part
        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                printf("%d ",m);
            }
            printf("\n");
        }
    }


    return 0;
}
