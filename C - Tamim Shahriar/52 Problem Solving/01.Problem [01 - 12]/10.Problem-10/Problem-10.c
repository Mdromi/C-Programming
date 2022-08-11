#include<stdio.h>
int main()
{
    int i,T, r1, r2, B, ball_played;
    double curent_rr, asking_rr; // Run Rates


    scanf("%d",&T);

    while(T--)
    {
        scanf("%d %d %d",&r1,&r2,&B);

        ball_played = 300 - B;
        curent_rr = (r2 * 1.0 / ball_played) * 6;
        asking_rr = ((r1 - r2 + 1)* 1.0 / B) * 6;
        printf("%.2lf %.2lf\n",curent_rr, asking_rr);

    }


    return 0;
}



