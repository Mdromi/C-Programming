//Write a program Positive / Negative Determination
#include<stdio.h>
int main()
{

    int num;

    printf("Enter any integer number : ");
    scanf("%d",&num);

    if(num>0){
        printf("%d this is positive number\n",num);
    }else if(num<0){
        printf("%d this is negative number\n",num);
    }else {
        printf("%d this number is zero\n",num);
    }


    return 0;
}


