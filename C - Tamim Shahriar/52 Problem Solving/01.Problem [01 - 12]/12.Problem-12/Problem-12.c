#include<stdio.h>
int main()
{
  int i,T,N,x;

    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
        int fiveCount = 0;

        for(x = N; x>=1; x--)
        {
            if(x % 5 == 0)
            {
                fiveCount++;
            }
        }
        printf("%d\n",fiveCount);
    }



    return 0;
}




