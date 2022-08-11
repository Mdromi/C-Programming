//Program4.11
#include<stdio.h>
int main()
{
    int m,n,i,j;

    scanf("%d",&n); // n = 10

    for(i = 0; i < n; i++) // i = 2
    {
        scanf("%d",&m); // m = 25

        for(j = 10; j<=m; j++)
        {
            if(j % 11 == 0)
            {
                continue;
            }
            printf("%d\n",j);
        }

    }



    return 0;
}





