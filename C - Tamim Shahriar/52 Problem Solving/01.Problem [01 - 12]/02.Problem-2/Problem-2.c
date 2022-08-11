#include<stdio.h>
int main()
{
    int T, i;
    char n[101];

    scanf("%d", &T);

    for(i = 0; i<T; i++)
    {
        scanf("%d",&n[i]);

        if(n[i] %2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }


    }

    return 0;
}

