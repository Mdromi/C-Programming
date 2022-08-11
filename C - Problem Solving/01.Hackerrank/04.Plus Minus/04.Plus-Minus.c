#include<stdio.h>
int main()
{
    int n, i;
    double positiveNumber = 0, negativeNumber = 0, zeroNumber = 0;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] == 0)
        {
            zeroNumber++;
        }
        else if(a[i] > 0)
        {
            positiveNumber++;
        }
        else if(a[i] < 0)
        {
            negativeNumber++;
        }
    }



    printf("%.6lf\n%.6lf\n%.6lf\n", (positiveNumber/n), (negativeNumber/n), (zeroNumber/n));

    return 0;
}
