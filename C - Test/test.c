#include<stdio.h>
int main()
{
    int num = 121;
    int sum  = 0, temp = num, r  = 0;

    while(temp != 0){
        r = temp % 10;
        sum = sum*10+r;
        temp = temp / 10;
    }

    printf("S: %d\n", sum);

}
