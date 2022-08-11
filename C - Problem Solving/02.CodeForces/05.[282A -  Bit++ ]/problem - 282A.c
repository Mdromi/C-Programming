#include <stdio.h>

int main()
{
    int x = 0, i, n;
    char str[20];

    scanf("%d\n", &n);

    for (i = 0; i < n; i++)
    {
        scanf(" %[^\n]",str); //x++ ++x
        if(str[1] == ('+'))
        {
            x++;
        }
        else if(str[1] == ('-'))
        {
            --x;
        }
    }
    printf("%d\n", x);



    return 0;
}
