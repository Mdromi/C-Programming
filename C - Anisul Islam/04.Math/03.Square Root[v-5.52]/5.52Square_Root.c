#include<stdio.h>
int main()
{
    int x;
    double result;

    printf("Enter any number : ");
    scanf("%d",&x);

    result = sqrt(x); //result = sqrt(25);

    printf("Result = %.2lf\n",result);

    return 0;
}

