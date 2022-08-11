#include<stdio.h>

int is_balanced(char input[])// (())
{
    char stack[100], last_char;
    int top, i, len;

    top = 0;
    len = strlen(input);

    for(i = 0; i < len; i++) // i = 1
    {
        if(input[i] == '(')
        {
            stack[top] = '('; //((
            top++; // top = 2
        }
        else if(input[i] == ')')
        {
            if(top == 0) // false
            {
                //Stack empty
                return 0;
            }

            top --; // top = 0

            last_char = stack[top]; // last_char = stack[0] = (
            if(last_char != '(')
            {
                return 0;
            }
        }
    }

    if(top == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    char input[100];

    scanf("%s", input);

    if(is_balanced(input))
    {
        printf("%s is balanced\n", input);
    }
    else
    {
        printf("%s is not balanced\n",input);
    }

    return 0;
}
