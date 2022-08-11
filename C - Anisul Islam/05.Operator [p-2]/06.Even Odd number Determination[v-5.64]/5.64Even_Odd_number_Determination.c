//Write a program Even / Odd number Determination
#include<stdio.h>
int main()
{

    int num;

    printf("Enter an integer number : ");
    scanf("%d",&num);

    if(num%2==0){
        printf("%d is even number\n",num);
    }
    /*
    if(num%2!=0){
        printf("%d is odd number\n",num);
    }
    */
    else{
        printf("%d is odd number\n",num);
    }


    return 0;
}

