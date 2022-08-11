//Types of variables(Local & Global)
#include<stdio.h>

int a = 20; //Global variable

int main()
{
    int x = 10; //Local variable

    printf("Inside of the main function a = %d\n",a);
    printf("Inside of the main function x = %d\n",x);

    display();
}
void display()
{
    printf("Inside of the display function a = %d\n",a);
}
