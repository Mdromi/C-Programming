#include<stdio.h>
int main()
{
    char c = 'A';
    char *p, **q, ***r;

    p = &c;
    q = &p;
    r = &q;

    printf("value of c : %c\n", c);
    printf("value of c : %c\n", *p);
    printf("value of c : %c\n", **q);
    printf("value of c : %c\n", ***r);


    return 0;
}









