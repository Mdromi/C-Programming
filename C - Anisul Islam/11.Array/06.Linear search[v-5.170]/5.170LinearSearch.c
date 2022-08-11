//Linear searching
#include<stdio.h>
int main()
{
    int num[] = {10,2,30,15,38,5,20};
    int value,i;
    int position = -1;

    printf("Enter the value you want to search: ");
    scanf("%d",&value);

    for(i=0; i<7; i++)
    {
        if(value==num[i])
        {
            position = i+1;
            break;
        }
    }
    if(position==-1)
    {
        printf("Item is not found!\n");
    }else
    {
        printf("The value is found position at %d\n",position);
    }



    return 0;
}
