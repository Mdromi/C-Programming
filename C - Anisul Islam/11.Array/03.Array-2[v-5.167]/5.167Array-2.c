//Sum and Average of an Array
//write a program that read 10 numbers and display their sum and average

#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;


    printf("How many numbers: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter number a%d: ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");

    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is %d\n",sum);
    printf("The Avarge is %.2lf\n",(float)sum/n);


    return 0;
}
