
#include<stdio.h>
int main()
{
    int i=0;
    char ch[30];

    printf("Enter your string: ");
    gets(ch);

    printf("Full name = %s\n\n",ch);
    while(ch[i]!='\0')
    {
        printf("%c\n",ch[i]);
        i++;
    }


    return 0;
}

