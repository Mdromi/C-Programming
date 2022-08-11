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

    int num;

    printf("Enter an integer number : ");
    scanf("%d",&num);

    if(num%2==0){
        printf("%d is even number\n",num);
    }
    /*
    if(num%2!=0){
        printf("%d is odd number\n",num);
    }
    */
    else{
        printf("%d is odd number\n",num);
    }


    return 0;
}
