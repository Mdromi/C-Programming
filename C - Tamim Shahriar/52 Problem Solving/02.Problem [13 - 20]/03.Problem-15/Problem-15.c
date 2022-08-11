#include<stdio.h>
int main()
{

    char S[1000];
    int T,i,x;

    scanf("%d",&T);

    while(T--)
    {
        scanf(" %[^\n]", S);

        int count[26];
        for(i = 0; i < 26; i++)
        {
            count[i] = 0;
        }

        for(i = 0; i < strlen(S); i++)
        {
            if(S[i] >= 'a' && S[i] <= 'z')
            {
                count[S[i]-'a']++;
            }
        }
        for(i = 0; i < 26; i++)
        {
            if(count[i] != 0)
            {
                printf("%c = %d\n", 'a'+i, count[i]);
            }
        }
    }

    return 0;
}

