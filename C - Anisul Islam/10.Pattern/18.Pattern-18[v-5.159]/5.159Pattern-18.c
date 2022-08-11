/*
Square Pattern
 *
 * *
 *   *
 * * * *
*/

#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter N: ");
    scanf("%d",&n); //n =4

    for(row=1; row<=n; row++)//row = 1
    {
        //printing number
        for(col=1; col<=n; col++)//col = 4
        {
            if(col==1 || row==n || row==col)
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










