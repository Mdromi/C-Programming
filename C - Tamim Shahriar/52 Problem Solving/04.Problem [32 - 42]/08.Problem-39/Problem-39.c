#include<stdio.h>
int main()
{
    int T, i, j, len;
    char string1[1001], string2[1001];
    scanf("%d",&T);

    while(T--)
    {
        scanf(" %[^\n]", string1);
        len = strlen(string1);

        //now reverse the string into string2
        for(i=0, j=len-1; i<len; i++,j--)
        {
            string2[i] = string1[j];
        }
        string1[j] = '\0';
        string2[i] = '\0';

        if(strcmp(string1, string2) == 0)
        {
            printf("Yes! It is Palindrome!\n");
        }
        else
        {
            printf("Sorry! It is not Palindrome!\n");
        }



    }


    return 0;
}

