#include<stdio.h>
int main()
{
    int i,j,temp;
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    //int ara2[10];

    for(i=0, j=9; i<10; i++,j--)
    {
      temp = ara[j];// ara[8] = 90 | temp = 90
      //ara2[j] = ara[i];// ara[1] = 20 | ara[1] = 20
      ara[i] = temp;// ara[1] = 90 | temp = 90
    }

    for(i=0; i<10; i++)
    {
        printf("%d\n", ara[i]);
    }


    return 0;
}
