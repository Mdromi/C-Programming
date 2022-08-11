#include<stdio.h>
int main()
{
    int t,i,len,count;
    char s[1002];

    scanf("%d",&t);

    while(t--)
    {
        scanf(" %[^\n]", s);

        len = strlen(s);

        for(i = len -1; i>=0; i--)
        {
            printf("%c",s[i]);
        }
    }


    return 0;
}



