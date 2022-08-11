#include<stdio.h>
int main()
{
    int t,i,count;
    char s[1002];

    scanf("%d",&t);

    while(t--)
    {
        scanf(" %[^\n]", s);

        count = 0;
        char* token = strtok(s,",!;?. ");

        while(token != 0)
        {
            count++;
            token = strtok(0,",!;?. ");
        }

        printf("Count = %d\n",count);
    }


    return 0;
}

