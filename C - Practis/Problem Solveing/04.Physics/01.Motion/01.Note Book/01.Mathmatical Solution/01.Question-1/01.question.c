/*
আনাফ স্কুলের বার্ষিক ক্রিয়া প্রতি যোগীতায় স্কুল মাঠে 84m ব্যাস  বিশিষ্ট বৃওকার পথ ২ মিনিটে দৌড়ে শেষ করে।
    ১। আনাফ এর দ্রুতি কত?
    ২। আনাফ এর অতিক্রান্ত দূরত্ব আর সরণ এটা কী সমান? যদি সমান না হয়,তাহলে তার কারন বিশ্লেষণ কর। বিশ্লেষণ

*/

#include<stdio.h>
int main()
{
    int minute;
    double diameter,time,r,PI,circumference,distance,speedV,displacement;

    printf("Input Diameter of Field(meter) : ");
    scanf("%lf",&diameter); //84m

    printf("Input Time(minute) : ");
    scanf("%d",&minute); //2min

    time = 60*minute;
    r = diameter / 2;
    PI = 3.1416;
    circumference = 2*PI*r;
    distance = circumference;

    speedV = distance / time;
    printf("speedV = %.2lfms-1\n",speedV); //2.2ms-1

    displacement = 0;

    if(distance == displacement)
    {
        printf("Distance equal Displacement\n");

    }else
    {
        printf("Distance not equal Displacement\n");
    }


    return 0;
}
