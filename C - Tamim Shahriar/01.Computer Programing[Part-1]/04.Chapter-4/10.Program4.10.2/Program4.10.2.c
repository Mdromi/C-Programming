//Program4.10.2
#include<stdio.h>
int main()
{
    int n,i,m;
    m  = 0;
    for(n = 1; n <= 10; n++)
    {
        for(i = 1; i<=10; i++)
        {
           m = m + n;
           printf("%d x %d = %d\n",n,i,m);

        }
        m = 0;
    }


    return 0;
}





