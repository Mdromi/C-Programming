#include<stdio.h>
int main()
{
    int T, x, i, j, n;

    scanf("%d",&T);

    for(x=1; x<=T; x++)
    {
        scanf("%d",&n);

        for(i =1; i<=n; i++)
        {
            for(j = 1; j<=n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }


    return 0;
}
