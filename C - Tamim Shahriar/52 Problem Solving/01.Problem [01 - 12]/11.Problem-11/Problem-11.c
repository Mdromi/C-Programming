#include<stdio.h>
int main()
{
  int i,T,N,x;

    scanf("%d",&T);

    for(i=0; i<=T; i++)
    {
        scanf("%d",&N);
        long long  int fectotial = 1;

        for(x=2; x<=N; x++)
        {
            fectotial = fectotial * x;
        }
        printf("%lld\n",fectotial);
    }



    return 0;
}




