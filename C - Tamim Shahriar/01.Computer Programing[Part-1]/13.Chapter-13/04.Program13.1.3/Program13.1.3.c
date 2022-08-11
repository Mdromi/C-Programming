#include<stdio.h>
#include<string.h>
int main()
{
    int number[120];
    int n, value, i, j, count, length, vagFol, vagSas, reverse;

    value = 1;
    count = 0;
    length = 0;

    //Input the number
    while(1)
    {
        printf("Enter valid number: ");
        scanf("%d",&n);
        if(1 < n && n < 100)
        {
            break;
        }
    }

    //Get factorial
    while(n != 0)
    {
        value = value*n;
        n--;
    }

    if (value < 2)
    {
        printf("Factorial number = %d\n",value);
    }
    printf("Factorial number = %d\n",value);

    reverse = value;
    vagFol = 0;

    for(i=0; i<120; i++)
    {
        number[i] = 0;
    }


    for(i=0; i<reverse; i++)
    {
        for(i = 2, j = 0; i < reverse;  i++,  j++)
        {
            while(value % i != 0 || value % i != 1)
            {
                vagFol = value / i;
                number[j] = i;
                value = vagFol;
                break;
            }
            reverse = value;
            printf("vagFol number = %d\n",vagFol);
        }
        reverse = value;

    }
    for(i=0; i<6; i++)
    {
        printf("%d", number[i]);
    }

    //printf("Factorial number = %d\n",value);

    return 0;
}


