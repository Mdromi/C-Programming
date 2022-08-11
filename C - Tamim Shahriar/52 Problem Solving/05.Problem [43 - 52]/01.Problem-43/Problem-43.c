#include<stdio.h>
int main()
{
    int T, i, p, q, c, temp, root;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d %d %d", &p, &q, &c);

        temp = 1;
        root = sqrt(q);

        for(i=1; i<=root; i++)
        {
            temp = (temp * p) % c;
        }
        printf("Result = %d\n", temp);
    }


    return 0;
}


