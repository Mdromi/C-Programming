/**
 * C program to find maximum between three numbers using conditional operator
 */

#include <stdio.h>

int main()
{
    int num1, num2, num3, max;

    /*
     * Input three numbers from user
     */
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    /*
     * If num1 > num2 and num1 > num3 then
     *     assign num1 to max
     * else if num2 > num3 then
     *     assign num2 to max
     * else
     *     assign num3 to max
     */
     if(num1 > num2 && num1 > num3){

        printf("[%d] num1 to is max\n",num1);

     }else if(num2 > num1 && num2 > num3){

        printf("[%d] num2 to is max\n",num2);

     }else if(num3 > num1 && num3 > num2){

        printf("[%d] num3 to is max\n",num3);

     }else if(num1 == num2 == num3){

        printf("[%d %d %d] num1, num2, num3 to is equal\n",num1,num2,num3);
     }

    max = (num1 > num2 && num1 > num3) ? num1 :
          (num2 > num3) ? num2 : num3;

    printf("\nMaximum between %d, %d and %d = %d", num1, num2, num3, max);

    return 0;
}
