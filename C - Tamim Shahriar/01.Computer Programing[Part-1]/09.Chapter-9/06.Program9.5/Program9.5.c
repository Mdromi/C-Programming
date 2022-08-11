#include<stdio.h>

//Getting string length
int string_length(char str[])
{
    int i, length = 0;

    for(i=0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
//Start main function
int main()
{
    int lenght;
    char country[100];

    while(1 == scanf("%s",country))
    {
        lenght = string_length(country);
        printf("length: %d\n\n",lenght);
    }


    return 0;
}




