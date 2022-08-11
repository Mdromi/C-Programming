
#include<stdio.h>
int main()
{
    int x , y, i, j, n, a, b;
    int grid[10][10];
    char c;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            grid[i][j] = 1;
        }
    }

    printf("Please enter the number of blocked cells: ");
    scanf("%d", &n);

    printf("Now enter the cells: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        grid[a][b] = 0;
    }

    printf("Please enter the initial position: ");
    scanf("%d %d", &x, &y); // 0 2

    while(1)
    {
        scanf("%c", &c);

        if(c == 'S' || c == 's')
        {
            break;
        }
        else if(c == 'U' || c == 'u')
        {
            if (grid[x][y] == 1)
            {
                x--;
            }
            else if(grid[x][y] == 0)
            {
                break;
            }
        }
        else if(c == 'D' || c == 'd')
        {
            if (grid[x][y] == 1)
            {
                x++;
            }
            else if(grid[x][y] == 0)
            {
                break;
            }
        }
        else if(c == 'R' || c == 'r')
        {
            if (grid[x][y] == 1)
            {
                y++;
            }
            else if(grid[x][y] == 0)
            {
                break;
            }
        }
        else if(c == 'L' || c == 'l')
        {
            if (grid[x][y] == 1)
            {
                y--;
            }
            else if(grid[x][y] == 0)
            {
                break;
            }
        }
    }

    printf("Final position of the robot is: %d, %d\n", a, b);



    return 0;
}


