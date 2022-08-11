#include<stdio.h>

#define CAPACITY 3

int stack[CAPACITY];
int top = -1;

//adding a value
void push(int x)
{
    if(top < CAPACITY-1)
    {
        top = top + 1;
        stack[top] = x;
        printf("Sucessfully added item: %d\n", x);
    }
    else
    {
        printf("Exception! No spaces\n");
    }

}

//return the top data
int pop()
{
    if(top >=0)
    {
        int val = stack[top];
        top = top - 1;

        return val;
    }
    printf("Exception from Pop! Empty Stack.\n");
    return -1;
}

//peek the top value
int peek()
{
    if(top >= 0)
    {
        return stack[top];
    }
    printf("Exception from Peek! Empty Stack.\n");
    return -1;
}

int main()
{
    printf("Implement my stack in C.\n");

    peek();
    printf("\n");

    push(10);
    push(20);
    push(30);
    printf("Pop item: %d\n", pop());
    push(40);
    printf("\n");

    printf("Top of Stack: %d\n", peek());

    return 0;
}
