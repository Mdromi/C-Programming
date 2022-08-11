// 1 x 2 x 3 x ...... x n

#include<stdio.h>
int main()
{
    int n,i,result = 1;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i = 1; i<=n; i++)
    {
        result = result*i;
    }
    printf("Result = %d\n",result);



    return 0;
}



