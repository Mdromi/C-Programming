#include<stdio.h>
int main()
{
    int t,i,j,count;
    char s[1002];
    char voel[5] = {'a','e','i','o','u'};

    scanf("%d",&t);

    while(t--)
    {
        scanf(" %[^\n]", s);

        count = 0;
        for(i=0; i<strlen(s); i++)
        {
            for(j=0; j<5; j++)
            {
                if(s[i] == voel[j] && s[i] != ' ')
                {
                    count++;
                }
            }
        }
        printf("Number of vowels = %d\n",count);
    }


    return 0;
}
