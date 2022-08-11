
#include<stdio.h>
int main()
{
    int i=0,len=0;
    char ch[30];

    printf("Enter your string: ");
    gets(ch);

    printf("Full Name = %s\n",ch);
    while(ch[i]!='\0')
    {
        len++;
        i++;
    }
    printf("Length = %d\n",len);
    return 0;
}



