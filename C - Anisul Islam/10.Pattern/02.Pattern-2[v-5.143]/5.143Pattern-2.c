/*
Right Angle Triangle Pattern
1
2 2
3 3 3
4 4 4 4
*/

#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter N: ");
    scanf("%d",&n); //n =3

    for(row=1; row<=n; row++)//row =
    {

        for(col=1; col<=row; col++)//col = 1
        {
            printf("%c ",row+64); //row,col,col%2,row%2,col+64,row+64,*,#;
        }
        printf("\n");

    }


    return 0;
}

