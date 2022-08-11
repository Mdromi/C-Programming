/*
Dobule pyramid Pattern
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/

#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter N: ");
    scanf("%d",&n); //n =4

    for(row=1; row<=n; row++)//row = 2
    {

        //printing space
        for(col=1; col<=n-row; col++)//col = 1
        {
            printf("  "); //
        }

        //printing pyramid number-1
        for(col=1; col<=row; col++)//col = 1
        {
            printf("%d ",col); //row,col,col%2,row%2,col+64,row+64,*,#;
        }

        //printing pyramid number-1
        for(col=row-1; col>=1; col--)//col = 1
        {
            printf("%d ",col); //row,col,col%2,row%2,col+64,row+64,*,#;
        }
        printf("\n");
    }


    return 0;
}




