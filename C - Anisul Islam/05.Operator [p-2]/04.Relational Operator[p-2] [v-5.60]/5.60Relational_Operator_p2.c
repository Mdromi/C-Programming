/*
 1.<
 2.<=
 3.>
 4.>=
 5.==
6.!=
*/
//control statement - conditional control statement, loop control statement
//conditional control statement - if-else, switch
#include<stdio.h>
int main()
{

    int num1, num2;

    printf("Enter an first integer number : ");
    scanf("%d",&num1);

    printf("Enter an first integer number : ");
    scanf("%d",&num2);

    if(num1>num2){
        printf("num1 gratter than num2 = %d\n",num1);
    }else if(num1<num2){
        printf("num2 gratter than num1 = %d\n",num2);
    }else {
        printf("Numbers are equal\n");
    }


    return 0;
}

