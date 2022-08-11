// 1*2 + 2*3 + 3*4 + ...... + n1*n2

#include<stdio.h>
int main()
{
    int n1, n2, a, b, sum;

    a = 1;
    b = 2;
    sum = 0;

    printf("Enter n1 and n2 the last number of the series: ");
    scanf("%d %d",&n1,&n2);

    printf("1.2 + 2.3 + 3.4 + ...... + %d.%d",n1,n2);

    while(a<=n1 && b<=n2) // a = 1
    {
        sum = sum + a*b; // sum =
        a = a + 1;
        b = b + 1;
    }
    printf(" = %d\n",sum);


    return 0;
}


