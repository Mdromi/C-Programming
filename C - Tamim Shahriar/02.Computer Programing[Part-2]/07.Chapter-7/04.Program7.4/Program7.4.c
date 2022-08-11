#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **ara, num[12];
    int i, j, total_classes, n;

    printf("Enter the total number of classes : ");
    scanf("%d", &total_classes);
    ara = (int **)malloc(sizeof(int *) * total_classes);

    if(ara == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(i=0; i<total_classes; i++)
    {
        printf("Enter the number of students for class %d : ", i + 1);
        scanf("%d", &n);
        num[i] = n;
        ara[i] = (int *)malloc(sizeof(int) * n);

        if(ara[i] = NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }

        for(j=0; j<n; j++)
        {
            printf("Enter marks for student %d: ", j + 1);
            scanf("%d", &ara[i][j]);
        }
    }

    //now print the result
    printf("Output\n");
    for(i=0; i<total_classes; i++)
    {
        for(j=0; j<num[i]; j++)
        {
            printf("%4d", ara[i][j]);
        }
        printf("\n");
    }
    return 0;
}
