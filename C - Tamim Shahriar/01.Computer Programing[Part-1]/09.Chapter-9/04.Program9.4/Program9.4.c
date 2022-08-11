#include<stdio.h>
/*
A - Z = 65 -90
a - z = 97 - 122
*/
int main()
{
    int i,lenght;
    char country[] = {'B','a','n','g','l','a','d','e','s','h','\0'};

    lenght = 10;

    for(i=0; i<lenght; i++)
    {
        if(country[i] >= 97 && country[i] <= 122)
        {
            country[i] = 'A' + (country[i] - 'a');  // country[0] = 65  + (66 - 65) = B
        }
    }
    printf("%s\n",country);


    return 0;
}



