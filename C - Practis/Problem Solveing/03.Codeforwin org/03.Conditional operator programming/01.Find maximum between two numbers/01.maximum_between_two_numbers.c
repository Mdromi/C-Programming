/*
  C program to find maximum between two numbers using conditional operator
 */

#include <stdio.h>

int main()
{
    int num1, num2, max;

    /*
     * Input two number from user
     */
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    /*
     * If num1 > num2 then
     *     assign num1 to max
     * else
     *     assign num2 to max
     */

     if(num1 > num2){
        printf("[%d] num1 to is max\n",num1);
     }else{
         printf("[%d] num2 to is max\n",num2);
     }

    max = (num1 > num2) ? num1 : num2;

    printf("Maximum between %d and %d is %d\n", num1, num2, max);

    return 0;
}
