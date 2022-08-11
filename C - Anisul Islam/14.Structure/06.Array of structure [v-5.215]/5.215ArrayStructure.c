#include<stdio.h>

//global structure
struct person
{
    int age;
    float salary;

};

int main()
{
    struct person person[4];
    int i;

    for(i=0; i<4; i++)
    {
        printf("\nEnter information for Person %d\n",i+1);
        printf("Enter Age: ");
        scanf("%d", &person[i].age);

        printf("Enter Salary: ");
        scanf("%f", &person[i].salary);
    }

    for(i=0; i<4; i++)
    {
        printf("\n\nInformation for Person %d\n",i+1);
        printf("Age: %d\n",person[i].age);

        printf("Salary: %.2f",person[i].salary);
    }



    return 0;
}



