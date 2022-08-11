//Write  a Counting number of a digit in an integer Program
#include<stdio.h>
int main()
{
    int num, temp, count = 0;

    printf("Enter a positive number : ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {

        temp = temp / 10;
        ++count;
    }
    printf("[%d]Total number of digits : %d",num,count);



    return 0;
}





