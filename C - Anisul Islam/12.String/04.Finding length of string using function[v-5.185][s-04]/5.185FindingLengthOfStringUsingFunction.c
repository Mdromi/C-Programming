
#include<stdio.h>
int main()
{
    char ch[30];

    printf("Enter your string: ");
    gets(ch);

    printf("Full Name = %s\n",ch);

    int len = strlen(ch);
    printf("Length = %d\n",len);

    return 0;
}


