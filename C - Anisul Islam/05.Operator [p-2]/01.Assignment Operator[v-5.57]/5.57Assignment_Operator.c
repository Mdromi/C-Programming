//Write a program that takes two integer and display sum
/*
 1. =
 2. +=
 3. -=
 4. *=
 5. /=
 6. %=
*/
#include<stdio.h>
int main()
{
    int a;

    a = 5;

    a += 2;
    printf("a += 2 : %d\n",a); // a = a + 2;

    a -= 2;
    printf("a -= 2 : %d\n",a); // a = a - 2;

    a *= 2;
    printf("a *= 2 : %d\n",a); // a = a * 2;

    a /= 2;
    printf("a /= 2 : %d\n",a); // a = a / 2;

    a %= 2;
    printf("a %= 2 : %d\n",a); // a = a % 2;



    return 0;
}

