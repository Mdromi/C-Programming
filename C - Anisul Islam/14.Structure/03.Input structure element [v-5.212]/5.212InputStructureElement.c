#include<stdio.h>

//global structure
struct person
{
    int age;
    float salary;

};

int main()
{
    struct person person1, person2;

    printf("Enter information for Person1: \n");

    printf("Enter Age : ");
    scanf("%d",&person1.age);

    printf("Enter Salary : ");
    scanf("%f",&person1.salary);

    printf("\nPerson1: \n");
    printf("Age = %d\n", person1.age);
    printf("Salary = %.2f\n\n", person1.salary);

    printf("Enter information for Person2: \n");

    printf("Enter Age : ");
    scanf("%d",&person2.age);

    printf("Enter Salary : ");
    scanf("%f",&person2.salary);

    printf("\nPerson2: \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.3f\n",person2.salary);

    return 0;
}

