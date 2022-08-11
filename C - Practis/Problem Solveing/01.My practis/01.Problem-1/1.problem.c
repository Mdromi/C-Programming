//Multiplication Table
/*
    Enter any number : 3

    i / 3 =

    6 % 3 = 0
    3 x 2 = 6
    3 x 3 = 9

    .........
    3 x 10 = 30

*/
#include<stdio.h>
int main()
{
    while(1)
    {
        int num,i;

        printf("Enter any number : ");
        scanf("%d",&num);

        for(i = 1; i<20; i++) // i++ = i= i +1;
        {
            if(i% 3 == 0)
            {
                 printf("%d / 3 = %d\n",i,i / 3);
            }

        }

    }
    return 0;
}


