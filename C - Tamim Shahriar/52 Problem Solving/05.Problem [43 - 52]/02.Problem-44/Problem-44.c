#include<stdio.h>
int main()
{
    int odd[21], even[21];
    int i, j, T, N;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &N);

        even[0] = 1;
        even[1] = 1;

        printf("%d",even[1]);
        printf("\n");
        for(j=0; j<2; j++)
        {
            printf("%d ",even[j]);
        }
        printf("\n");

        for(i=3; i<=N+1; i++)
        {
            if(i % 2 == 0)
            {
                even[0] = 1;
                for(j=1; j<i-1; j++)
                {
                    even[j] = odd[j-1] + odd[j]; //even[1] = 3;
                }
                even[j] = 1; //even[3] = 1;

                for(j=0; j<i; j++) // i = 4
                {
                    printf("%d ",even[j]);
                }
                printf("\n");
            }
            else
            {
                odd[0] = 1;
                for(j=1; j<i-1; j++)
                {
                    odd[j] = even[j-1] + even[j]; //odd[1] = 2
                }
                odd[j] = 1; //odd[2] = 1;

                for(j=0; j<i; j++)
                {
                    printf("%d ",odd[j]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
