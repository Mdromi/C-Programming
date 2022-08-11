#include<stdio.h>
//pointer is a variable that store the address of another variable.
//& symbol is used to get the address of the variable.
//* symbol is used to get the value of the variable that the pointer is pointing to.
int main()
{
    int x = 5;

    int *p;
    p = &x;

    printf("Value of x = %d\n",x);
    printf("Address of x = %u\n",&x);
    printf("Address of p = %u\n",p);
    printf("Content of p = %u\n",*p);
    printf("Address of p variable = %u\n",&p);


    return 0;
}
