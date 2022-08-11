#include<stdio.h>
int main()
{
    char str1[30];
    char str2[30];

    printf("Enter string1: ");
    gets(str1);

    printf("Enter string2: ");
    gets(str2);

    //String concat using build function
    strcat(str1,str2);
    //strcat(str1,"MD Romi");

    printf("String1 = %s\n",str1);
    printf("String1 = %s\n",str2);


    return 0;
}



