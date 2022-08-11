//Write a program that read 3 numbers and display maximum
#include<stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter a letter : ");
    scanf("%d %d %d",&num1, &num2, &num3);

    if(num1>num2 && num1>num3){
        printf("Large number = %d\n",num1);
    }else if(num2>num1 && num2>num3){
        printf("Large number = %d\n",num2);
    }else if(num3>num1 && num3>num2){
        printf("Large number = %d\n",num3);
    }else{
        printf("Numbers are equal");
    }



    return 0;
}

