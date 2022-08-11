/*
Dobule Right Angle Triangle Pattern
1
1 2
1 2 3
1 2
1
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
            printf("%d ",col); //row,col,col%2,row%2,col+64,row+64,*,#;
        }
        printf("\n");

    }
    for(row=n-1; row>=1; row--)//row =
    {

        for(col=1; col<=row; col++)//col = 1
        {
            printf("%d ",col); //row,col,col%2,row%2,col+64,row+64,*,#;
        }
        printf("\n");

    }


    return 0;
}


