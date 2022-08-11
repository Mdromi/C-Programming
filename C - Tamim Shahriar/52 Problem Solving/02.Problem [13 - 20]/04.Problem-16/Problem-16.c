#include<stdio.h>
void print_reverse(char str[])
{
    int i;
    for(i = strlen(str)-1; i>=0; i--)
    {
        printf("%c", str[i]);
    }
}
int main()
{

    char S[1002], word[1002];
    int T, i, j, k, s_len;

    scanf("%d",&T);

    for(i = 0; i < T; i++)
    {
        scanf(" %[^\n]", S);
        s_len = strlen(S);

        for(j = 0, k = 0; j < s_len; j++)
        {
            if(S[j] != ' ')
            {
                word[k] = S[j];
                k++;
            }
            else if( k > 0)
            {
                word[k] = '\0';
                print_reverse(word);
                k = 0;
                printf(" ");
            }
        }
        if( k > 0)
        {
            word[k] = '\0';
            print_reverse(word);
            printf(" ");
        }
    }


    return 0;
}


