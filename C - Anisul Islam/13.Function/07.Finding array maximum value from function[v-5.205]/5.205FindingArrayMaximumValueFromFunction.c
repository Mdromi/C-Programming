//Finding array maximum value from function
#include<stdio.h>

int maximum(int x[])//
{
    int i;
    int max = x[0];

    for(i=1; i<5; i++)
    {
        if(max < x[i])
        {
            max = x[i];//max = 500
        }
    }
    return max;
}

int main()
{
    int num[] = {10, 20, 30, 40, 50};

    int maximumValue = maximum(num);
    printf("Maximum Value of the Array: %d\n",maximumValue);

    return 0;
}



