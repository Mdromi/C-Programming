#include<stdio.h>
int main()
{
    int t,i,n;
    int num[102];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d", &n);

        for(i=0; i<n; i++)
        {
            scanf("%d",&num[i]);
        }
        for(i=0; i<n; i+=2)
        {
            printf("%d ",num[i]);
        }
    }


    return 0;
}




