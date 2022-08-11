#include<stdio.h>
int main()
{
    float lenght, width, area;

    printf("Enter Lenght: ");
    scanf("%f",&lenght);

    printf("Enter Width: ");
    scanf("%f",&width);

    area = lenght * width;

    printf("Area of Rectangle : %.2f\n ",area);

    return 0;
}
