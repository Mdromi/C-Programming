//Write a Sum of Digits Program
#include<stdio.h>
int main()
{
    int num, temp, r, sum = 0;

    printf("Enter a positive number : ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        r = temp % 10;
        sum = sum + r;
        temp = temp / 10;
    }
    printf("[%d]Sum of Digits = %d",num,sum);



    return 0;
}



