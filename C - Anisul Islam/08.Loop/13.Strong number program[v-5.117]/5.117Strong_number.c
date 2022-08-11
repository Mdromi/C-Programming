//Write a Strong number Program
#include<stdio.h>
int main()
{
    int num, temp, rem, i, fact, sum = 0;

    printf("Enter a positive number : ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        rem = temp % 10;

        fact = 1;
        for(i = 1; i<=rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }
    if(num == sum)
    {
        printf("[%d] is Strong Number.",num);
    }else{
        printf("[%d] is NOT Strong Number!",num);
    }



    return 0;
}





