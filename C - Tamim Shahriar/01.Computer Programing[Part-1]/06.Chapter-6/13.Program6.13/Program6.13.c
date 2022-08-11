#include<stdio.h>
int main()
{
    int i,marks;
    int marks_count[101];
    int total_marks[] = {80, 96, 90, 63, 53, 60, 76, 83, 86, 97, 90, 78,
    76, 97, 95, 93, 93, 55, 49,95, 83, 86, 97, 83, 86, 52, 49, 46,  78, 76,
    97, 95,93, 95, 86, 62, 49, 41, 97, 90};

    printf("Enter finder number: ");
    scanf("%d",&marks);

    //Step-1
    for(i=0; i<101; i++)
    {
        marks_count[i] = 0;
    }

    //Step-2
    for(i=0; i<40; i++)
    {
        marks_count[total_marks[i]]++;
    }

    //Step-3 finder the students marks
    for(marks; marks<=100; marks++)
    {
        printf("Marks: %d Count: %d\n", marks, marks_count[marks]);
    }


    return 0;
}


