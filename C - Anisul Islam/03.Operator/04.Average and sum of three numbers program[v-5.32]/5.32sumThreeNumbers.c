//Write a program that sum two numbers and get average number
#include<stdio.h>
int main()
{
    int num1, num2,num3, sum;
    float avg;

    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = (float)sum/3;

    printf("%d + %d + %d = %d \nAverage = %.3f\n ",num1, num2, num3, sum, avg);
    //printf("Average = %.3f\n",avg);

    return 0;
}

