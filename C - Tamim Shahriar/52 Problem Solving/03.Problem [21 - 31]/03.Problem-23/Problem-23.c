#include<stdio.h>
int main()
{
    int t,i;
    char s[1002];

    scanf("%d",&t);

    while(t--)
    {
        scanf(" %[^\n]", s);

        for(i=0; s[i] != '\0'; i++)
        {
            printf("%d", s[i]-64);
        }
    }


    return 0;
}



