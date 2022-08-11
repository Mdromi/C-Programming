//Passing Aray using function
#include<stdio.h>

void display(int x[])//
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d ",x[i]);
    }
}

int main()
{
    int num[] = {10, 20, 30, 40, 50};

    display(num);


    return 0;
}


