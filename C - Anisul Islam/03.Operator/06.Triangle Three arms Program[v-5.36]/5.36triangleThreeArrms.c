/*
s = (a + b + c) / 2;
area = sqrt(( s*(s-a)*(s-b)*(s-c) ));
*/

#include<stdio.h>
int main()
{
    double a, b, c, s, area;

    printf("Enter Three Values : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(( s*(s-a)*(s-b)*(s-c) ));

    printf("Area of triangle = %.2lf\n",area);

    return 0;
}
