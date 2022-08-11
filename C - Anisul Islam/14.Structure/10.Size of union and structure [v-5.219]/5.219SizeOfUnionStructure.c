#include<stdio.h>
/* Like structure, union is a user defined data type, In union, all members share the same
   memory location.
*/

union test1
{
    int x, y;
};

union test2
{
    char ch;
    int x;
};

union test3
{
    char name[20];
    double d;
};

struct test4
{
    int x;
    int y;
    char ch;
};

int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf("Union sizeof(t1) = %d\n",sizeof(t1));
    printf("Union sizeof(t2) = %d\n",sizeof(t2));
    printf("Union sizeof(t3) = %d\n",sizeof(t3));
    printf("Struct sizeof(t4) = %d\n",sizeof(t4));

    return 0;
}

