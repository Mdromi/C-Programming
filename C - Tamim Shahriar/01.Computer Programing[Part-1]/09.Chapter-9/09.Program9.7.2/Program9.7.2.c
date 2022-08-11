#include<stdio.h>
//Getting string length
int string_length(char str[])
{
    int i, length = 0;

    for(i=0; str[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}

//String compare
int string_compare(char a[],char b[])
{
    int i,j;

    for(i=0; a[i]!= '\0' && b[i] != '\0'; i++)
    {
        if(a[i] > b[i])
        {
            return -1;
        }
        if(a[i] < b[i])
        {
            return 1;
        }
    }
    if(string_length(a) == string_length(b))
    {
        return 0;
    }

    if(string_length(a) < string_length(b))
    {
        return -1;
    }

    if(string_length(a) > string_length(b))
    {
        return 1;
    }
}
int main()
{
    char str1[100],str2[100];

    printf("Enter string one: ");
    gets(str1);

    printf("Enter string two: ");
    gets(str2);

    int result = string_compare(str1,str2);

    printf("value is %d",result);

    return 0;
}

