/*
Square Pattern
 * * * *
 *     *
 *     *
 * * * *
*/

#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter N: ");
    scanf("%d",&n); //n =3

    for(row=1; row<=n; row++)//row = 1
    {
        //printing number
        for(col=1; col<=n; col++)//col = 1
        {
            if(row==1 || row==n || col==1 || col==n)
            {
                printf(" *"); //row,col,col%2,row%2,col+64,row+64,*,#;
            }else
            {
                printf("  ");
            }
        }
        printf("\n");
    }


    return 0;
}









