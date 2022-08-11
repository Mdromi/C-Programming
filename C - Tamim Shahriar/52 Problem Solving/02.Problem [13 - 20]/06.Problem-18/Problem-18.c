#include<stdio.h>
int main()
{
    int t,i;
    char s[1002];

    scanf("%d",&t);

    while(t--)
    {
        scanf(" %[^\n]", s);

        //printing vowel
        for(i=0; s[i] != '\0'; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                printf("%c",s[i]);
            }

        }

        //printing consonants
        printf("\n");
        for(i=0; s[i] != '\0'; i++)
        {
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != ' ')
            {
                printf("%c",s[i]);
            }

        }
    }


    return 0;
}

