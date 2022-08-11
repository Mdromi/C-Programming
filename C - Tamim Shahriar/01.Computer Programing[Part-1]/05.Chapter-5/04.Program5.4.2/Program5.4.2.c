#include<stdio.h>
int main()
{
    double s,v,t;

    printf("Enter velocity(ms-1): ");
    scanf("%lf",&v);

    printf("Enter velocity of time(sec): ");
    scanf("%lf",&t);

    s  = 2*t*v;
    printf("Distance covered s = %.2lfm\n",s);


    return 0;
}




