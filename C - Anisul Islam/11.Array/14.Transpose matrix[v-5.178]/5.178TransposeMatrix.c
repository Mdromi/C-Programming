#include<stdio.h>
int main()
{
    int i,j,row,col;
    int A[10][10],transpose[10][10];

    printf("Enter number of rows and colums for the matrix : ");
    scanf("%d %d",&row,&col);


    //Getting the elements for the Matrix
    printf("Enter elements for first matrix.\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //Transpose Matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }

    //Printing A Matrix
    printf("\nA Matrix:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //Printing transpose Matrix
    printf("\nTranspose Matrix:\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }


    return 0;
}





