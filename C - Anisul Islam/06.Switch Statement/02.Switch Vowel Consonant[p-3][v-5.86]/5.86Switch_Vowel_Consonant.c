//Switch Keyword : switch, case, break, default
//Switch Statement | Vowel / Consonant[p-3]
#include<stdio.h>
int main()
{
    char ch;

    printf("Enter A Digit : ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel\n");
            break;

        default:
            printf("Consonant\n");
    }

    return 0;
}



