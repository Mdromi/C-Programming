// 1^2 x 2^2 x 3^2 x ...... x n^2

#include<stdio.h>
int main()
{
    int n,i,result = 1;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i = 1; i<=n; i++)
    {
        result = result*i*i;
    }
    printf("Result = %d\n",result);



    return 0;
}




