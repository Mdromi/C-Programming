#include<stdio.h>
int main()
{
    int age, i, j, maxCanNumber, maxCanIndex =0;
    scanf("%d", &age);

    int candle[age];

    for(i = 0; i < age; i++)
    {
        scanf("%d", &candle[i]);

        if( i == 1)
        {
            maxCanNumber = candle[0];
        }
        //maxAgeIndex = i;
        if(maxCanNumber < candle[i] && i >=1)
        {
           maxCanNumber = candle[i];
        }
    }

    for(i = 0; i < age; i++)
    {
        if(maxCanNumber == candle[i])
        {
            maxCanIndex++;
        }
    }
    printf("%d\n",maxCanIndex);

    return 0;
}
