#include<stdio.h>
int reverseArray(int arrayLen, int ara[])
{
    int i, temp, j;

    j = arrayLen-1; // j = 5
    for(i = 0; i < arrayLen/2; i++) // i = 3
    {
        temp = ara[i]; // temp = 3
        ara[i] = ara[j]; //ara[2] = 6
        ara[j] = temp; //ara[3] = 3
        j--; // j = 2
    }

    return ara;
}
int main()
{
    int n, i;
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int araLan = n;

    reverseArray(araLan, a);

    for(i = 0; i < araLan; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
