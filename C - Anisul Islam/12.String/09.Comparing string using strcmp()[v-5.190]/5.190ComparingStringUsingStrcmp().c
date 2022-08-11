#include<stdio.h>
int main()
{
    char str1[30];
    char str2[30];

    printf("Enter string1: ");
    gets(str1);

    printf("Enter string2: ");
    gets(str2);

    //String compare using build function
    int d = strcmp(str1,str2);

    if(d==0)
    {
        printf("String are equal");
    }else
    {
        printf("String are not equal!");
    }


    return 0;
}




