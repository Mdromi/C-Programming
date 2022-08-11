#include<stdio.h>
#include<math.h>
int main()
{
    int  T ;
    int x1, x2, y1, y2, r, value;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d %d",&x2, &y2);
        scanf("%d", &r);
        scanf("%d %d",&x1, &y1);

        value = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) );

        if(value > r)
        {
            printf("The point is not inside the circle\n");
        }
        else
        {
            printf("The point is inside the circle\n");
        }
    }


    return 0;
}



