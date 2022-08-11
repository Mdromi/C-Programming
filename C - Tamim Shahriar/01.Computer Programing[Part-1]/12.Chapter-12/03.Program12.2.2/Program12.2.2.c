#include<stdio.h>
#include<string.h>
#include<math.h>

void get_binary(int dec)
{
    int binary[240], binary2[240];
    int i, j, length, vagFol, vagSas, value;

    length = 1;
    value = dec;

    while(value / 2 != 0) //11 / 2 = 5
    {
        vagFol = value / 2; //5
        ++length;//7
        value = vagFol; //dec = 5
    }

    vagFol = 0;
    value = dec;

    for(i=0; i<length; i++)
    {
        vagFol = value / 2; // 95 / 2 = 47
        vagSas = value % 2; // 1
        binary[i] = vagSas; // 0 = 1
        value = vagFol;

    }


    for(i=0; i<length; i++)
    {
        binary2[i] = 0;
    }

    for(i=length-1,j=0; i>=0; i--,j++)
    {
        binary2[j] = binary[i];
    }

    for(i=0; i<length; i++)
    {
        printf("%d", binary2[i]);
    }

    return;
}
int main()
{
    int dec;

    printf("Enter the decimal number: ");
    scanf("%d",&dec);


    get_binary(dec);


    return 0;
}


