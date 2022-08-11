#include<stdio.h>
int main()
{
    int i,num,sum;

    printf("Enter last number: ");
    scanf("%d",&num);

    sum = 0;

    for(i = 1; i<=num; i = i+2 ) // num = 5
    {
        sum = sum + i; //s = 0; i = 1;

    }
    printf("Summation is %d\n",sum); // sum = 9;




    return 0;
}






