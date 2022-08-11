#include<stdio.h>
#include <stdlib.h>
#include <windows.h>

#include<conio.h>

#ifdef _WIN32
#include<conio.h>
#define sleep(x) Sleep(x*1000)
#else
#include<conio.h>
#define clrscr() printf("\e[1;1H\e[2J")
#include<unistd.h>
#endif // _WIN32

#define CYCLE 5
#include <windows.h>




int main()
{
    getch();
    clrscr();
    int hour, minute, second;

    printf("Enter Hour Minute Second: ");
    scanf("%d%d%d", &hour, &minute, &second);
    clrscr();

    int h = 0, m = 0, s = 0;
    while(1)
    {
        printf("%.2d:%.2d:%.2d\n", h, m, s);

        if(h == hour && m == minute && s == second)
        {
            break;
        }
        else
        {
            clrscr();
        }
        s++;
        sleep(1);
        if(s == CYCLE)
        {
            m++;
            s = 0;
        }
        if(m == CYCLE)
        {
            h++;
            m = 0;
        }
    }

    getch();
    return 0;
}
