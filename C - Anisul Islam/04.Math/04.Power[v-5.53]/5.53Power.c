#include<stdio.h>
int main()
{
    int x, y;
    double result;

    printf("Enter x = ");
    scanf("%d",&x);

    printf("Enter y = ");
    scanf("%d",&y);

    result = pow(x,y); //result = pow(x,3); //result = pow(2,3);

    printf("Result = %.2lf\n",result);

    return 0;
}

