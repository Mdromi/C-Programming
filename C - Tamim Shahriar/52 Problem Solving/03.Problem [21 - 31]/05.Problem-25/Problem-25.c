#include<stdio.h>
int gcd(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int main()
{
    int t,i,a, b,x,y, value,lcm;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d", &a, &b);
        x = a;
        y = b;
        value = gcd(x,y);
        lcm = (a * b) / value;
        printf("LCM = %d\n",lcm);
    }


    return 0;
}




