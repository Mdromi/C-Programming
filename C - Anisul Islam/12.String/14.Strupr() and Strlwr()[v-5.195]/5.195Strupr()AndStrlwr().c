#include<stdio.h>
int main()
{
    char str[30];

    printf("Enter the String: ");
    gets(str);

    strupr(str);
    printf("\nUpper String = %s\n",str);

    strlwr(str);
    printf("Lower String = %s\n",str);



    return 0;
}







