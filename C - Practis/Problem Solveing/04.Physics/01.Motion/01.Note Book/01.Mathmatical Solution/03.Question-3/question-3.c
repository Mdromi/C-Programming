/*
চিএে, ৪০ মিটার  একটি বর্গাকার মাঠের ৪০ মিটার ব্যাস বিশিষ্ট একটা বৃওকার অংশ  আছে। A বিন্দু থেকে বর্গাকার পথে রাজু এবং B বিন্দু থেকে বৃওকার পথে
মিনা ঘড়ির কাঁটার দিকে দৌড়াচ্ছে।
    ১। মিনা বৃওকার পথটি 1.1/4 বার ঘুরলে তার সরণ কত?
    ২। রাজুর সম্পূন্ন বর্গাকার মাঠ ১ বার অতিক্রম করতে ৪০ সেকেন্ড সময় লাগে। তাহলে A বিন্দু থেকে শুরু করে অধ্যেক মাঠ অতিক্রম করার সময় দ্রুতি ও
    বেগ সমান কিনা গাণিতিক ভাবে বিশ্লেষন কর।

*/
#include<stdio.h>
int main()
{
    double lengthSquareArm,rajuSecond,minaDiameter;
    double rajuTime,halfSquareArm,minaRadius,fahimCircumference;
    double rajuDistance,rajuSpeedV,rajuVelocityV,minaDisplacement;
    double AC,AB,BC,rajuDisplacement;

    printf("input Raju length of the square arm(meter) : ");
    scanf("%lf",&lengthSquareArm); //40m

    printf("input Raju Time(sec) : ");
    scanf("%lf",&rajuSecond); //40sec

    printf("input Mina Diameter of Field(meter) : ");
    scanf("%lf",&minaDiameter); //40m

    printf("\n");

    minaRadius = minaDiameter/2;

    //Ans:1
    AB = minaRadius;
    BC = minaRadius;
    AC = sqrt(AB*AB + BC*BC);
    minaDisplacement = AC;
    printf("Mina Displacement = %.2lfm\n",minaDisplacement);

    //Ans:2
    rajuTime = rajuSecond / 2;

    halfSquareArm = lengthSquareArm*2;
    rajuDistance = halfSquareArm;
    rajuSpeedV = rajuDistance / rajuTime;
    printf("Raju speed is %.3lfms-1\n",rajuSpeedV);

    AB = lengthSquareArm;
    BC = lengthSquareArm;
    AC = sqrt(AB*AB + BC*BC);
    rajuDisplacement = AC;

    rajuVelocityV = rajuDisplacement / rajuTime;
    printf("Raju Velocity is %.3lfms-1\n",rajuVelocityV);

    printf("\n");

    if(rajuSpeedV > rajuVelocityV)
    {
        printf("Raju speed is high(%lf)\n",rajuSpeedV);

    }else if(rajuSpeedV < rajuVelocityV)
    {
        printf("Raju Velocity is high(%lf)\n",rajuVelocityV);

    }else{
        printf("Raju speed(%lf) and  speed(%lf) is equal.\n",rajuSpeedV,rajuVelocityV);
    }



    return 0;
}

