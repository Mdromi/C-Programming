#include<stdio.h>
#include<string.h>
struct person
{
    char name[10000];

};
int main()
{
    int i, j, T, n ;
    struct person word[25];
    char temp[10000];

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&n);

        //scan word
        for(i=0; i<n; i++)
        {
            fflush(stdin);
            gets(word[i].name);
        }

        //compair word
        for(i=0; i<n; i++)
        {
            for(j=i; j<n; j++)
            {
                if(strcmp(word[i].name, word[j].name) > 0)
                {
                    strcpy(temp, word[i].name);
                    strcpy(word[i].name, word[j].name);
                    strcpy(word[j].name, temp);
                }
            }
        }
        //printing word
        for(i=0; i<n; i++)
        {
            printf("%s\n",word[i].name);
        }
    }


    return 0;
}




