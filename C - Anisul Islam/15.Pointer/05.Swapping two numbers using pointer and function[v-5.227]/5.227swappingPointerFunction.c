#include<stdio.h>
void swapping(int *ptr1, int *ptr2)
{
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}
int main()
{
    int x = 10, y = 20, temp;

    printf("Before swapping : x = %d, y = %d\n",x, y);


    //Swapping
    swapping(&x,&y);

     printf("After swapping : x = %d, y = %d\n",x, y);


    return 0;
}




