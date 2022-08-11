//Write a Armstrong Number Program - 2
#include<stdio.h>
int main()
{
    int initialNum, finalNum, temp, r, i, sum = 0;

    printf("Enter a initial value : ");
    scanf("%d",&initialNum);

    printf("Enter a final value : ");
    scanf("%d",&finalNum);

    for(i = initialNum; i<=finalNum; i++)
    {
        temp = i;

        while(temp!=0)
        {
            r = temp % 10;
            sum = sum + r*r*r;
            temp = temp / 10;
        }

        if(i == sum)
        {
            printf("Armstrong Number = %d\n",i);
        }
        sum = 0;
    }





    return 0;
}








