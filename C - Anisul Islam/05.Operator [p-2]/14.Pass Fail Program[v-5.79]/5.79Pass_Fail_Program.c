//Pass / Fail Program
#include<stdio.h>
int main()
{
    int mark;

    printf("Enter Your Mark : ");
    scanf("%d",&mark);

    if(mark>100 || mark<0){
        printf("Enter Your valid Mark again: ");
    }else if(mark>=33 && mark<=100){
        printf("Pass");
    }else{
        printf("Fail");
    }



    return 0;
}

