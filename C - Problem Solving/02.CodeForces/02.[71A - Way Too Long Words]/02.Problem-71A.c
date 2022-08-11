#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char sc[10];
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <=n; i++)
    {
        scanf(" %[^\n]", s);
        int len, count;
        len = strlen(s);
        count = 0;

        //printf("len: %d\n", len);
        if(len <= 10)
        {
            printf("%s\n", s);
            continue;
        }
        else
        {
            for(j = 0; j < len; j++)
            {
                if(j == 0 || j == len - 1 )
                {
                    if(j == 0)
                    {
                        sc[0] = s[0];
                    }
                    else
                    {
                        sc[2] = s[j];
                    }

                }
                else
                {
                    sc[1] = sc[1];
                    count++;
                }
            }
            //printf("Count: %d\n",count);
            sc[1] = count;
            printf("%c", sc[0]);
            printf("%d", sc[1]);
            printf("%c\n", sc[2]);

        }

    }


    return 0;
}



