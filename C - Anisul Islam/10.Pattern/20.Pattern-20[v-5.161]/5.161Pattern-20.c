/*
Floyd's Triangle Pattern
1
2 3
4 5 6
7 8 9 10
*/

#include<stdio.h>
int main()
{
    int row,col,n,count=0;

    printf("Enter N: ");
    scanf("%d",&n); //n =4

    //printing row
    for(row=1; row<=n; row++)//row = 1
    {
        //printing number
        for(col=1; col<=row; col++)//col = 4
        {
            printf("%d ",++count);
        }
        printf("\n");
    }


    return 0;
}













