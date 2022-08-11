#include<stdio.h>
int main()
{

    char first_line[10001];
    char second_line[2];
    int T,i,count;

    scanf("%d",&T);

    while(T--)
    {
        scanf(" %[^\n]", first_line);
        scanf("%s",second_line);

        count = 0;
        for(i = 0; i < strlen(first_line); i++)
        {
            if(second_line[0] == first_line[i])
            {
                count++;
            }
        }

        if(count == 0)
        {
            printf("'%' is not present\n",second_line);

        }else
        {
            printf("Occurrence of '%c' in '%s' = %d\n",second_line[0],first_line,count);
        }
    }

    return 0;
}
