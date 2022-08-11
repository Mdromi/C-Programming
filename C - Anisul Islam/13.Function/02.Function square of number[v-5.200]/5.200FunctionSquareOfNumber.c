//Square number using function
#include<stdio.h>
int main()
{
    int num;

    printf("Enter any integer number: ");
    scanf("%d",&num);

    int result = square(num);

    printf("Square of the numbers = %d\n",result);


    return 0;
}
int square (int a)//void
{
    return a*a;
}
