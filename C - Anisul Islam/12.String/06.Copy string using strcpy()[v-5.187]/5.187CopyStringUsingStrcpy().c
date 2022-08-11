#include<stdio.h>
int main()
{
    int i=0;
    char source[] = "C programming";
    char target[30];

    printf("Enter string: ");
    gets(source);

    //String copy using build function
    //strcpy(target,source);

    //String copy without function
    while(source[i]!='\0')
    {
        target[i] = source[i];
        i++;
    }
    printf("Source String = %s\n",source);
    printf("Target String = %s\n",target);


    return 0;
}


