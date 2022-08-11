/*
 1. +
 2. -
 3. ++
 4. --
 5. /=
 6. %=
*/
#include<stdio.h>
int main()
{
    //1
    int x = 10;
    int result = +x;
    printf("result+ = %d\n",result);

    //2
    x = 10;
    result = -x;
    printf("result- = %d\n\n",result);

    //3
    x = 10;
    int y = x++; //y = 10
    printf("Postfix Increment :\n");
    printf("x = %d\n",x); //x = 11
    printf("x = %d\n\n",y); //y = 10

    //4
    x = 10;
    y = ++x; //y = 11
    printf("Prefix Increment :\n");
    printf("x = %d\n",x); //x = 11
    printf("x = %d\n\n",y); //y = 11

    //5
    x = 10;
    y = x--; //y = 10
    printf("Postfix Decrement :\n");
    printf("x = %d\n",x); //x = 9
    printf("x = %d\n\n",y); //y = 10

    //6
    x = 10;
    y = --x; //y = 9
    printf("Prefix Decrement :\n");
    printf("x = %d\n",x); //x = 9
    printf("x = %d\n\n",y); //y = 9

    //7
    x = 10;
    printf("All Unary Operator :\n");
    printf("x++ : %d\n",x++); //x = 10
    printf("x : %d\n",x); //x = 11
    printf("++x : %d\n",++x); //x = 12
    printf("x : %d\n",x); //x = 12
    printf("x-- : %d\n",x--); //x = 12
    printf("x : %d\n",x); //x = 11
    printf("--x : %d\n",--x); //x = 10


    return 0;
}
