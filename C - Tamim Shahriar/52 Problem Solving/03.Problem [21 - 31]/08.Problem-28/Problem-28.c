#include<stdio.h>
int main()
{
    int T, n, i;
    int ara[21];

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&n);

        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }

        int sorted = 1;

        for(i=1; i<n; i++)
        {
            if(ara[i] < ara[i-1]) // 2< 1
            {
                sorted = 0;
                break;
            }
        }

        if(sorted == 1)
        {
            printf("YES\n");
        }
        else if(sorted == 0)
        {
            for(i=1; i<n; i++)
            {
                if(ara[i] > ara[i-1]) // 4 > 5
                {
                    sorted = 0;
                    break;
                }
                else{
                    sorted = 1;
                }
            }

            if(sorted == 1)
            {
                printf("YES");
            }
            else
            {
                printf("NO");
            }
        }

    }


    return 0;
}


