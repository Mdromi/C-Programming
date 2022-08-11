#include<stdio.h>
#include<string.h>

void encrypt(char msg[])
{
    int i, n;

    n = strlen(msg);

    for(i = 0; i <= n; i++)
    {
        if(msg[i] >= 'a' && msg[i] < 'z')
        {
            msg[i] = (msg[i] - 'a') + 1 + 97;
        }
        else if(msg[i] >= 'A' && msg[i] < 'Z')
        {
            msg[i] = (msg[i] - 'A') + 1 + 65;
        }
    }


}

int main()
{
    char s[80];

    gets(s);

    encrypt(s);

    printf("%s\n", s);

    return 0;
}

