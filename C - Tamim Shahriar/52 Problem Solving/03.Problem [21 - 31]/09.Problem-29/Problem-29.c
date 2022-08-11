#include<stdio.h>
int main()
{
    int T;
    char ch[5];

    scanf("%d",&T);

    while(T--)
    {
        scanf("%s", &ch);

        if(ch[0] >= 'a' && ch[0] <= 'z')
        {
            printf("Lowercase character\n");
        }
        else if(ch[0] >= 'A' && ch[0] <= 'Z')
        {
            printf("Uppercase character\n");
        }
        else if(ch[0] >= '0' && ch[0] <= '9')
        {
            printf("Numerical character\n");
        }
        else
        {
            printf("Special character\n");
        }

    }


    return 0;
}


