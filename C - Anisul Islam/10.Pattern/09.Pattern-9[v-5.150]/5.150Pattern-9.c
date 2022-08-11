/*
Dobule Right Angle Triangle Pattern
   *
  **
 ***
****
*/

#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter N: ");
    scanf("%d",&n); //n =3

    //1st triangle
    for(row=1; row<=n; row++)//row = 1
    {

        //printing space
        for(col=1; col<=n-row; col++)//col = 1
        {
            printf(" "); //
        }
        //printing number
        for(col=1; col<=row; col++)//col = 1
        {
            printf("%d",col); //row,col,col%2,row%2,col+64,row+64,*,#;
        }

        printf("\n");
    }
    //2nd triangle
    for(row=n-1; row>=1; row--)
    {
        //printing space
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)//col = 1
        {
            printf("%d",col); //row,col,col%2,row%2,col+64,row+64,*,#;
        }
        printf("\n");
    }


    return 0;
}





