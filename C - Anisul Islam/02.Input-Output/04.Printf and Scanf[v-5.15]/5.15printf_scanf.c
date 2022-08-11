#include<stdio.h>
int main()
{
    int num1, num2;
    float num3;

    printf("Enter integer and float numbers : ");
    scanf("%d %d %f",&num1,&num2,&num3);
    printf("Numbers are : %d %d %.1f",num1,num2,num3);
    /*
    printf("Enter First integer : ");
    scanf("%d",&num1);
    printf("Enter Second integer : ");
    scanf("%d",&num2);
    printf("Numbers are : %d %d",num1,num2);
    */
    return 0;
}
