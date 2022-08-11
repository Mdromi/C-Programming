#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2;
    int first[10][10],second[10][10],result[10][10];

    printf("Enter rows and column for first matrix : ");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and column for second matrix : ");
    scanf("%d %d",&r2,&c2);

    printf("\n");

    while(c1!=r2)
    {
        printf("Error!! column of first matrix not equal to row of second\n");

        printf("Enter rows and column for first matrix : ");
        scanf("%d %d",&r1,&c1);

        printf("Enter rows and column for second matrix : ");
        scanf("%d %d",&r2,&c2);
    }

    printf("\n");

    //Taking input for first Matrix
    printf("Enter elements for first matrix.\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("Enter number for first matrix[%d][%d]: ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }

    //Taking input for second Matrix
    printf("\n\nEnter elements for second matrix.\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Enter number for second matrix[%d][%d]: ",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }


    //Printing first Matrix
    printf("First Matrix = ");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
        printf(" \t\t");
    }

    //Printing second Matrix
    printf("\nSecond Matrix = ");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
        printf("\t\t");
    }


    return 0;
}




