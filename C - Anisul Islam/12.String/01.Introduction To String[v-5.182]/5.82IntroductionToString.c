#include<stdio.h>
int main()
{
    char ch[5] = {'R','o','m','i','\0'};
    char s1[] = "MD Romi";
    char s2[] = "Md Romi\
                Web Designer and WordPress Developer";

    /*
    ch[0] = 'R';
    ch[1] = 'o';
    ch[2] = 'm';
    ch[3] = 'i';
    ch[4] = '\0';
    */


    printf("CH = %s\n",ch);
    printf("CH = %s\n",s1);
    printf("CH = %s\n",s2);


    return 0;
}
