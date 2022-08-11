#include<stdio.h>
int b_search(int ara, int low, int high, int key);
int main()
{
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};

    int low_index = 0;
    int high_index = 15;
    int mid_index;
    int num = 97;

    b_search(ara, low_index, high_index, num);

    return 0;
}
int b_search(int ara, int low, int high, int key)
{
    int num;
    int mid_index = (low + high) / 2;

    while(low <= high)
    {
       int mid_index = (low + high) / 2;

        if(num == ara[mid_index])
        {
            break;
        }
        if(num < ara[mid_index])
        {
            high = mid- 1;
        }
        else{
            low = mid+ 1;
        }
    }
    if(low_index > high_index)
    {
        printf("%d is not in the array\n",num);

    }else{

        printf("%d is found in the array. It is the %d th element of the array.\n",
               ara[mid_index], mid_index);
    }
}

