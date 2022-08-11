    #include<stdio.h>
    #include<conio.h>
    #include <stdlib.h>
    int main()
    {

    printf("Press any key to clear the screen.\n");

    getch();
    system("clear || cls");
    printf("This appears after clearing the screen.\n");
    printf("Press any key to exit...\n");
    getch();
    return 0;
    }
