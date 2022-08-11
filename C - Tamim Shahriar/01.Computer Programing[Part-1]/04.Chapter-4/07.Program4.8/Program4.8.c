//Program4.8
#include<stdio.h>
int main()
{
    int n = 5;
    int i = 1;

    for(; ; )
    {
        if(i > 10){
            break;
        }
        printf("%d x %d = %d\n",n,i,n*i);
        i = i + 1;

    }



    return 0;
}




