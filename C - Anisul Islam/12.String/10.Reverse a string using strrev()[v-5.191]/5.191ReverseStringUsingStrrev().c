#include<stdio.h>
int main()
{
    char str[30];

    printf("Enter string1: ");
    gets(str);

    printf("String = %s\n",str);

    //String reverse using build function
    strrev(str);
    printf("Reverse string = %s\n",str);

    return 0;
}





