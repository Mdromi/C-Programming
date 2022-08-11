//Switch Keyword : switch, case, break, default
//Switch Statement | Calculator
#include<stdio.h>
int main()
{
    double num1, num2;
    char op;

    printf("Enter an operator (+, -, *, /, %)");
    scanf("%c",&op);

    printf("Enter two numbers : ");
    scanf("%lf %lf",&num1, &num2);

    switch(op)
    {
        case '+':
            {
                printf("%.2lf + %.2lf = %.2lf\n",num1, num2, num1+num2);
                break;
            }
            case '-':
            {
                printf("%.2lf - %.2lf = %.2lf\n",num1, num2, num1-num2);
                break;
            }
            case '*':
            {
                printf("%.2lf * %.2lf = %.2lf\n",num1, num2, num1*num2);
                break;
            }
            case '/':
            {
                printf("%.2lf / %.2lf = %.2lf\n",num1, num2, num1/num2);
                break;
            }
        default:
            printf("Not a correct option ! \n");
    }

    return 0;
}





