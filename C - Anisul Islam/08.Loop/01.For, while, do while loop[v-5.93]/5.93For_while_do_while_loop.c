// Loop - for, while, do while loop

#include <stdio.h>

int main()
{
    int i, x, y, z;

    //1
    printf("For Loop :\n");
    for(i = 1; i<=5; i++){ //for (inintialzation 1; condition 2; counterUpdate4)
                         //{
                                //step3
                        //}

        printf("%d. C programing - for loop\n",i);

    }


    //2
    printf("\nWhile Loop :\n");
    x = 1; //inintialzation1 ;

    while(x<=5){ //while (condition 1)
                         //{
                                //Body step2
                                //counterUpdate3
                        //}

        printf("%d. C programing - while loop\n",x);
        x++;

    }

    //3
    printf("\nDo While Loop :\n");
    y = 1; //inintialzation1 ;

    do{

        printf("%d. C programing - Do while loop\n",y); //Body step2

        y++; //counterUpdate3 || increment
    }
    while(y<=5);//(condition 4)


    //4
    printf("\nFor Loop Even number:\n");
    for(z = 2; z<=100; z +=2){ //for (inintialzation 1; condition 2; counterUpdate4)
                         //{
                                //step3
                        //}

        printf("Even number %d\n",z);

    }

    return 0;
}


