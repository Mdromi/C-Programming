/*
Right Angle Triangle Pattern
4 4 4 4
3 3 3
2 2
1
*/

#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter N: ");
    scanf("%d",&n); //n =3

    for(row=n; row>=1; row--)//row =
    {

        for(col=1; col<=row; col++)//col = 1
        {
            printf("%d ",row); //row,col,col%2,row%2,col+64,row+64,*,#;
        }
        printf("\n");

    }


    return 0;
}


