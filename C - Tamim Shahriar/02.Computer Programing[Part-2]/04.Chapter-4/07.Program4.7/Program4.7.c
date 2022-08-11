#include<stdio.h>
void recurse(int count)
{
    if(count > 5) //count = 4
    {
        return;
    }
    printf("Count = %d\n", count); //4
    recurse(count + 1);
}
int main()
{
    recurse(1);

    return 0;
}
