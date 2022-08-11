/*
ফাহিম ৫০ মিটার ব্যাসার্ধের একটি বৃওকার রাস্তা ২  মিনিট সময়ে একবার অতিক্রম করে। সুমন  ৫০ মিটার বাহু বিশিষ্ট একটি বর্গকার রাস্তা ১.৪ মিনিট  সময়ে একবার অতিক্রম করে।
    ১। ৩০ সেকেন্ড সময়ে ফাহিম এর সরণ কত?
    ২। ফাহিম এবং সুমনের মধ্যে দ্রুতি কার বেশি?

*/
#include<stdio.h>
int main()
{
    double fahimMinute,sumonMinute;
    double fahimTime,sumonTime,fahimRadius,lengthSquareArm,fahimCircumference,r,PI;
    double fahimDistance,sumonDistance,sumonSpeedV,fahimSpeedV,fahimDisplacement;
    double AC,AB,BC;

    printf("input Fahim Diameter of Road(meter) : ");
    scanf("%lf",&fahimRadius); //50m

    printf("input Fahim Time(minute) : ");
    scanf("%lf",&fahimMinute); //2min

    printf("input Sumon length of the square arm(meter) : ");
    scanf("%lf",&lengthSquareArm); //50m

    printf("input Fahim Time(minute) : ");
    scanf("%lf",&sumonMinute); //1.4min

    printf("\n");

    fahimTime = 60*fahimMinute;
    sumonTime = 60*sumonMinute;

    //Ans:1
    AB = fahimRadius;
    BC = fahimRadius;
    AC = sqrt(AB*AB + BC*BC);
    fahimDisplacement = AC;
    printf("Fahim Displacement = %.2lfm\n",fahimDisplacement);

    //Ans:2
    r = fahimRadius;
    PI = 3.1416;
    fahimCircumference = 2*PI*r;
    fahimDistance = fahimCircumference;
    fahimSpeedV = fahimDistance / fahimTime;
    printf("Fahim speed is %.3lfms-1\n",fahimSpeedV);

    sumonDistance = lengthSquareArm*4;
    sumonSpeedV = sumonDistance / sumonTime;
    printf("Sumon speed is %.3lfms-1\n",sumonSpeedV);

    printf("\n");

    if(fahimSpeedV > sumonSpeedV)
    {
        printf("Fahim speed is high(%lf)\n",fahimSpeedV);

    }else if(fahimSpeedV < sumonSpeedV)
    {
        printf("Sumon speed is high(%lf)\n",sumonSpeedV);

    }else{
        printf("Sumon speed(%lf) and Fahim speed(%lf) is equal.\n",sumonSpeedV,fahimSpeedV);
    }



    return 0;
}
