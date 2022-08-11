#include<stdio.h>
/*
A - Z = 65 -90
a - z = 97 - 122
*/
int main()
{
    int i,lenght;
    char country[] = {'B','A','N','G','L','A','D','E','S','H','\0'};

    lenght = 10;

    for(i=0; i<lenght; i++)
    {
        if(country[i] >= 65 && country[i] <= 90)
        {
            country[i] = 'a' + (country[i] - 'A'); // country[0] = 97  + (66 - 65) = b
        }
    }
    printf("%s\n",country);


    return 0;
}




