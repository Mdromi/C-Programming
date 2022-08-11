//Write a Palindrome Number Program
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
        sum = sum * 10 + r;
        temp = temp / 10;
    }

    if(num == sum)
    {
        printf("[%d] is Palindrome Number.",num);
    }else{
        printf("[%d] is NOT Palindrome Number!",num);
    }



    return 0;
}






