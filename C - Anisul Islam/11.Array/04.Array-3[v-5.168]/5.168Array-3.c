//write a program that can take some numbers and display maximum
#include<stdio.h>
int main()
{
    int num[100],n,i;

    printf("How many numbers: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter number a%d: ",i);
        scanf("%d",&num[i]);
    }
    printf("\n");

    int max = num[0];

    for(i=1; i<n; i++)
    {
        if(max < num[i])
        {
            max = num[i];
        }
    }
    printf("Maximum = %d\n",max);


    return 0;
}
