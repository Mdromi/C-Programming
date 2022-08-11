//Break and continue statement
#include<stdio.h>
int main()
{
    int i;

    for(i = 1; i<20; i++) // i++ = i= i +1;
    {
        if(i% 3 == 0)
        {
            continue;// bypass
        }
        printf("%d\n",i);

        if(i == 10)
            break; // loop terminate
    }
    /*
        1
        2
        4
        5
        7
        8
        9
        10
    */
    return 0;
}
