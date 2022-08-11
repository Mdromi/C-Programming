#include<stdio.h>
int main()
{
    int i, n1, n2, n3, T, Kase, temp, j;

    scanf("%d",&T);

    for(Kase=1; Kase<=T; Kase++)
    {
        scanf("%d %d %d",&n1,&n2,&n3);

        for(i =1; i<=3; i++)
        {
             if(n1 > n2)
             {
                 temp = n1;
                 n1 = n2;
                 n2 = temp;
             }
             if(n2 > n3)
             {
                 temp = n2;
                 n2 = n3;
                 n3 = temp;
             }
        }
        printf("Case %d: %d %d %d\n",Kase,n1,n2,n3);
    }


    return 0;
}

