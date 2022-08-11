//area = 3.1416 * radius * radius;
#include<stdio.h>
#include<math.h>
int main()
{
    float area, radius,Circum,PI;

    PI = 3.1416;

    printf("Enter Radius: ");
    scanf("%f",&radius);

    area = 3.1416 * radius * radius;
    //area = M_PI * radius * radius;
    //area = PI * radius * radius;

    printf("Area of circle = %.2f\n",area);

    Circum = 2*PI*radius;
    printf("Area of Circumfernce = %.2f",Circum);

    return 0;
}
