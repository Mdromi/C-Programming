#include<stdio.h>
int main()
{
    int i, j, T, num1, num2, lcm, gcd, rem ;
    long int A, B, C;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%ld %ld %ld",&A, &B, &C);

        num1 = A;
        num2 = B;

        while(num2 != 0)
        {
            rem = num1 % num2;
            num1 = num2;
            num2 = rem;
        }
        gcd = num1;
        lcm = A*B/gcd;

        if(A > B)
        {
            printf("Invalid!");
        }
        else
        {
            for(i=lcm; i<=C; i+=lcm)
            {
               printf("%d\n",i);
            }
        }

    }


    return 0;
}


