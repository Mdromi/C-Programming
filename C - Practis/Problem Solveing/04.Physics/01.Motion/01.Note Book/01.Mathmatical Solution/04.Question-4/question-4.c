/*
P ব্যাক্তি ০.৭৫ms-1 এবং  Q ব্যাক্তি ১.২৫ms-1 সমবেগে  A বিন্দু থেকে  পরস্পরের বিপরীত দিকে দৌড়াচ্ছে। ২ সেকেন্ডে উভয় ই যথাক্রমে B
এবং C বিন্দুতে পৌছালো।
এখন,Q-P(০.৭৫ms-1)এর বেগ নিয়ে এবং P-Q(১.২৫ms-1)এর বেগ নিয়ে উভই D বিন্দুতে পৌছালো।
    ১। BC এর দূরত্ব কত?
    ২। P এবং  Q উভই ব্যাক্তি কি একই সময় D বিন্দুতে পোছাবে?
*/

#include<stdio.h>
int main()
{
    double pVelocity,qVelocity,tempVelocity,time;
    double Vp,Vq,Sp,Sq,Tp,Tq;
    double BC,BD,CD;

    printf("input P velocity(ms-1) : ");
    scanf("%lf",&pVelocity); //0.75ms-1

    printf("input Q velocity(ms-1) : ");
    scanf("%lf",&qVelocity); //1.25ms-1

    printf("input CD distance(meter) : ");
    scanf("%lf",&CD); //3m

    printf("input P or Q time(sec) : ");
    scanf("%lf",&time); //2sec

    printf("\n");

    //Ans1

    Vp = pVelocity;
    Vq = qVelocity;

    Sp = Vp*time; //formula(s = vt)
    Sq = Vq*time; //formula(s = vt)

    BC = Sp + Sq;
    printf("BC distance = %.3lfm\n",BC); //part-1

    //Ans2
    /*tempVelocity = pVelocity;
    pVelocity = qVelocity;
    qVelocity = tempVelocity;*/

    // formula(t = s/v)
    Sq = CD;
    Tq = Sq/pVelocity;
    printf("Q person time = %.3lfs\n",Tq);

    BD = sqrt(BC*BC + CD*CD);
    Sp = BD;
    Tp = Sp/qVelocity;
    printf("P person time = %.3lfs\n",Tp);

    if(Tp == Tq)
    {
        printf("Yes, P and Q the person will arrive at the same time.\n");
    }else
    {
        printf("No! P and Q the person will not arrive at the same time!\n");
    }


    return 0;
}
