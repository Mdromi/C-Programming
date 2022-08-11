//Array Definition
//Array Declaration
//Array Initialization

// DataType array_name [array_row] [array_col];
#include<stdio.h>
int main()
{
    int i,j,numberOfRows,numberOfCols;
    int A[10][10],B[10][10],C[10][10];

    printf("How the number of rows and cols: ");
    scanf("%d %d",&numberOfRows,&numberOfCols);

    //Scanning A Matrix
    printf("Enter elements for A matrix.\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("Enter number A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //Scanning B Matrix
    printf("\n\nEnter elements for B matrix.\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("Enter number B[%d][%d]: ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    //Printing A Matrix
    printf("A = ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //Printing B Matrix
    printf("\nB = ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    //Adding the Matrix
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    //Printing C Matrix
    printf("\nA + B = ");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");
    }


    return 0;
}




