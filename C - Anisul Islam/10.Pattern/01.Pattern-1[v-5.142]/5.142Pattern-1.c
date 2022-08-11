/*
Right Angle Triangle Pattern
1
1 2
1 2 3
1 2 3 4
*/

#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter N: ");
    scanf("%d",&n); //n =3

    for(row=1; row<=n; row++)//row = 2
    {

        for(col=1; col<=row; col++)//col = 1
        {
            printf("%d ",col);
        }
        printf("\n");

    }


    return 0;
}
