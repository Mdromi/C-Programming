#include<stdio.h>
int main()
{
    int T, i, N;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d", &N);

        for(i=N; i>0; i--)
        {
            if(i == 1) printf("1\n");
            else if(i == 2) printf("2 + ");
            else printf("2^%d + ",i);
        }
    }


    return 0;
}

