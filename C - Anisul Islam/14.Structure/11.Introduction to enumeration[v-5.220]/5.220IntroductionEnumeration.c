#include <stdio.h>
/*An enumeration is a user-defined data type that consists of integral constants*/

enum days_of_week
{
    Sun=1, Mon, Tue, Wed, Fri, Sat
};

int main()
{
    enum days_of_week day1, day2;

    day1 = Tue;
    printf("Day = %d\n",day1);

    day2 = Wed;
    int dif = day2 - day1;
    printf("Day difference = %d\n",dif);

    return 0;
}
