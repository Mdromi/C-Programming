//power.....
//base^exponent
//2^3 = 2*2*2 = 8
//2^4 = 2*2*2*2 = 16
//3^4 = 3*3*3*3 = 81
#include<stdio.h>
int main()
{
    double base,exp,result=1,i;

    printf("Enter Base: ");
    scanf("%lf",&base);

    printf("Enter Exponent: ");
    scanf("%lf",&exp);

    //result = pow(base,exp);

    for(i=1; i<=exp; i++)
    {
        result = result * base; //result = 1
    }

    printf("Result = %.0lf",result);



    return 0;
}
