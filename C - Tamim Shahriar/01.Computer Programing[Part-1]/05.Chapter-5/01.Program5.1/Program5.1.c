/*
x+y=15,x-y=5 হলে  x ও y-এর মান কত?
*/

#include<stdio.h>
int main()
{
    double x,y,x_plus_y,x_minus_y;

    printf("Enter the value of x + y: ");
    scanf("%lf",&x_plus_y);

    printf("Enter the value of x - y: ");
    scanf("%lf",&x_minus_y);

    x = (x_plus_y + x_minus_y)/2;
    y = (x_plus_y - x_minus_y)/2;

    printf("x = %.2lf\n",x);
    printf("y = %.2lf\n",y);

    return 0;
}
