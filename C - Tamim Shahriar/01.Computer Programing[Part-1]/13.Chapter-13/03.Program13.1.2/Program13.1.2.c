#include<stdio.h>
#include<string.h>
int main()
{
    int n, value;



    printf("Enter number: ");
    scanf("%d",&n);

    if(n == 0 )
    {
        printf("Factorial number = 1\n");
    }

    while(n != 0)
    {
        value = 1;
        value = value*n;
        n--;
    }
    printf("Factorial number = %d\n",value);

    return 0;
}

