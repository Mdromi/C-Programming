// Check String number of capital-small letter,digits

#include<stdio.h>
int main()
{
    int i, capital, small, digit;
    char str[100];

    printf("Enter a String: ");
    gets(str);

    i=capital=small=digit = 0;

    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
        {
            capital++;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            small++;
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            digit++;
        }

        i++;
    }

    printf("\nNumber of Capital letter = %d\n",capital);
    printf("Number of Small letter = %d\n",small);
    printf("Number of digit = %d\n",digit);


    return 0;
}









