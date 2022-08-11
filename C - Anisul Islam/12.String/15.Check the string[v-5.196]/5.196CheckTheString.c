// Check Number of vowels, consonants, words, digits and other

#include<stdio.h>
int main()
{
    int i, vowel, consonant, words, digit, other;
    char str[100],ch;

    printf("Enter the String: ");
    gets(str);

    i=vowel=consonant=words=digit=other = 0;

    while((ch=str[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            vowel++;
        }
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='A'))
        {
            consonant++;
        }
        else if(ch>='0' && ch<='9')
        {
            digit++;
        }
        else if(ch==' ')
        {
            words++;
        }
        else{
            other++;
        }

        i++;
    }
    words++;

    printf("\nNumber of vowels = %d\n",vowel);
    printf("Number of consonants = %d\n",consonant);
    printf("Number of words = %d\n",words);
    printf("Number of digit = %d\n",digit);
    printf("Number of other = %d\n",other);


    return 0;
}








