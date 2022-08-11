//Write a program thats returns marks
#include<stdio.h>
int main()
{
    float marks;

    printf("Enter your marks : ");
    scanf("%f",&marks);

    if(marks > 100){
        printf("Sry,Input your valid Marks! ");
    }else if(marks >= 80){
        printf("Your grate : A+ ");
    }else if(marks >= 70){
        printf("Your grate : A ");
    }else if(marks >= 60){
        printf("Your grate : A- ");
    }else if(marks >= 50){
        printf("Your grate : B ");
    }else if(marks >= 40){
        printf("Your grate : C ");
    }
    else if(marks >= 33){
        printf("Your grate : D ");
    }else{
        printf("Sorry You are fail in the exam! ");
    }






    return 0;
}
