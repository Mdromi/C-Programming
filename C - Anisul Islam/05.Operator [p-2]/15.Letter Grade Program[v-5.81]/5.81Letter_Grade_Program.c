//Write a program thats returns Letter Grade
#include<stdio.h>
int main()
{
    float mark;

    printf("Enter your mark : ");
    scanf("%f",&mark);

    if(mark > 100 || mark < 0){
        printf("Sry,Input your valid Marks! ");
    }else if(mark >= 80 && mark<=100){
        printf("Your grate : A+ ");
    }else if(mark >= 70 && mark<=79){
        printf("Your grate : A ");
    }else if(mark >= 60 && mark<=69){
        printf("Your grate : A- ");
    }else if(mark >= 50 && mark<=59){
        printf("Your grate : B ");
    }else if(mark >= 40 && mark<=49){
        printf("Your grate : C ");
    }else if(mark >= 33 && mark<=39){
        printf("Your grate : D ");
    }else{
        printf("Sorry You are fail in the exam! ");
    }


    return 0;
}

