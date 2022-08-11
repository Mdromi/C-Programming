#include<stdio.h>
int main()
{
    int i,j;
    int A[3][3],upperSum=0,lowerSum=0;

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
    //Sum of upper and lower triangles matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<j)
            {
                upperSum = upperSum + A[i][j];
            }
            if(i>j)
            {
                lowerSum = lowerSum + A[i][j];
            }
        }
    }

    //Printing sum of upper and lower triangles matrix
    printf("Sum of upper triangles elements: %d\n",upperSum);
    printf("Sum of lower triangles elements: %d\n",lowerSum);

    return 0;
}







