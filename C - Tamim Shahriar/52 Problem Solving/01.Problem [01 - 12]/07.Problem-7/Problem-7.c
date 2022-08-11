#include<stdio.h>
int main()
{
    char line[100000];
    int i, j, T, count;

    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {
        scanf(" %[^\n]",line);

        count = 1;
        j = 0;

        while(line[j] != '\0')
        {
            if(line[j] == ' ')
            {
                count++;
            }
            j++;
        }
        printf("%d\n",count);
    }



    return 0;
}
