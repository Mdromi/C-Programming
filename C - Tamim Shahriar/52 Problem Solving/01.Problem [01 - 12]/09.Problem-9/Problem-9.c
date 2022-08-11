#include<stdio.h>
int main()
{
    int i,T, N, sq_root;


    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
        sq_root = sqrt(N);

        if(sq_root * sq_root == N)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }


    return 0;
}


