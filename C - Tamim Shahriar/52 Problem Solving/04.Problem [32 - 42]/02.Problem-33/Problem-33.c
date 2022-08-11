#include<stdio.h>
int main()
{
    int i, j, T, A, B, C;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d %d %d",&A, &B, &C);

        if(A > B)
        {
            printf("Invalid!");
        }
        else
        {
            for(i=A; i<=B; )
            {
                if(i%C == 0)
                {
                    printf("%d\n", i);
                    i+=C;
                }
                else
                {
                    i++;
                }
            }
        }

    }


    return 0;
}

