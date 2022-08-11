#include<stdio.h>
int main()
{
    int T, i, j, len;
    char string1[1001];
    scanf("%d",&T);

    while(T--)
    {
        scanf("%s", string1);
        len = strlen(string1);

        //now reverse the string into string2
        int count = 0;
        for(i=0, j=len-1; i<len; i++,j--)
        {
            if(string1[i] == string1[j])
            {
                count++;
            }
            else
            {
                break;
            }

        }
        if(count == len)
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


