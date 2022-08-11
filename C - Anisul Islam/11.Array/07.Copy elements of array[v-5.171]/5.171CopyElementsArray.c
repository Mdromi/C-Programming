//Copy all elements of an array
#include<stdio.h>
int main()
{
    int array1[30],array2[30],i,n;

    printf("How many numbers: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter number array%d: ",i);
        scanf("%d",&array1[i]);
    }

    printf("\nArray1 : ");
    for(i=0; i<5; i++)
    {
        printf("%d ",array1[i]);
    }


    //copy all the elements from array1 to array2
    for(i=0; i<5; i++)
    {
        array2[i] = array1[i];
    }

    printf("\nArray2 : ");
    for(i=0; i<5; i++)
    {
        printf("%d ",array2[i]);
    }

    getch();
}

