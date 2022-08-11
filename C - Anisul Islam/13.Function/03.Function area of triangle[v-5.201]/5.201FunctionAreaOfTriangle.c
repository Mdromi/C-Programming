//Area of Triangle
#include<stdio.h>
double triangleArea (double b,double h);
int main()
{
    double base, height;

    printf("Enter base of triangle: ");
    scanf("%lf",&base);

    printf("Enter height of triangle: ");
    scanf("%lf",&height);

    double area = triangleArea(base,height);

    printf("Triangle of area = %.2lf\n",area);


    return 0;
}
double triangleArea (double b,double h)//void
{
    return 0.5 * b * h;
}

