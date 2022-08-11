#include<stdio.h>
/* Like structure, union is a user defined data type, In union, all members share the same
   memory location.
*/

union test
{
    int x, y;
};

int main()
{
    union test t1;

    t1.x = 10;
    printf("t1.x = %d\n",t1.x);
    printf("t1.y = %d\n\n",t1.y);

    t1.y = 20;
    printf("t1.x = %d\n",t1.x);
    printf("t1.y = %d\n",t1.y);

    return 0;
}
