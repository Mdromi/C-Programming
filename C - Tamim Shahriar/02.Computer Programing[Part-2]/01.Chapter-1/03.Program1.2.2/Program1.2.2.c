#include<stdio.h>
int digit_check(char ch)
{
    if(ch >= 48 && ch <= 57)
    {
        return 1;
    }
    else return 0;
}
int main()
{
    char charcter;
    int value;

    printf("Please enter a charcter: ");
    charcter = getchar();
    value = digit_check(charcter);
    printf("The capital letter is: %d\n", value);


    return 0;
}


