#include<stdio.h>
int main()
{
    int i,j;
    int A[3][3],sum=0;

    //Getting the elements for the Matrix
    printf("Enter elements for first matrix.\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //Printing the Matrix
    printf("\nThe Matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal elements:\n");
    //Sum of diagonal elements Matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }

    //Printing diagonal elements Matrix
    printf("Sum of diagonal elements Matrix: %d\n",sum);

    return 0;
}






