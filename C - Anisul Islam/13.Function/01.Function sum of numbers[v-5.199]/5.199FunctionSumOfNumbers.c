#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);

    int result = sum(num1,num2);
    sub(num1,num2);

    printf("Sum of the numbers = %d\n",result);


    return 0;
}
/*
return_type functiobn_name (arguments) //void
{

}
*/
int sum (int a, int b)//void
{
    return a+b;
}

void sub (int a, int b)
{
    printf("\nSubtraction of the numbers = %d\n",a-b);
}
