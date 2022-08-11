//Write a G.C.D & L.C.M - Program
#include<stdio.h>
int main()
{
    int num1, num2, n1, n2, rem, gcd, lcm;

    printf("Enter a positive two number : ");
    scanf("%d %d",&num1,&num2);

    n1 = num1;
    n2 = num2;


    while(n2!=0)
    {
        rem = n1  % n2; // 12 % 6
        n1 = n2; // n1 = 6
        n2 = rem; //n2 = 2

    }
    gcd = n1;
    lcm = num1 * num2 / gcd;

    printf("G.G.D = %d\n",gcd);
    printf("L.C.M = %d\n",lcm);

    return 0;
}



