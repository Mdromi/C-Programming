#include<stdio.h>
int main()
{
    int i=0, j=0, len=0;
    char str1[30];
    char str2[30];

    printf("Enter string1: ");
    gets(str1);

    printf("Enter string2: ");
    gets(str2);

    //Get str1[] length
    while(str1[i]!='\0')
    {
        len++;
        i++;
    }

    while(str2[j]!='\0')
    {
        str1[len+j] = str2[j];
        j++;
    }
    printf("String1 = %s\n",str1);


    return 0;
}




