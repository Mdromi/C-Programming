#include<stdio.h>
int main()
{
    int i,marks,count;
    int total_marks[40] = {80, 96, 90, 63, 53, 60, 76, 83, 86, 97, 90, 78,
    76, 97, 95, 93, 93, 55, 49,95, 83, 86, 97, 83, 86, 52, 49, 46,  78, 76,
    97, 95,93, 95, 86, 62, 49, 41, 97, 90};

    printf("Enter finder number: ");
    scanf("%d",&marks);

    //finder the students marks
    for(marks; marks<=100; marks++)
    {
        count = 0;
        for(i=0; i<40; i++)
        {
            if(total_marks[i]==marks)
            {
                count++;
            }
        }
        printf("Marks: %d Count: %d\n", marks, count);
    }



    return 0;
}

