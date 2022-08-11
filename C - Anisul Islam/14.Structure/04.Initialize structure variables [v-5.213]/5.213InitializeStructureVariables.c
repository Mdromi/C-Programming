#include<stdio.h>

//global structure
struct person
{
    int age;
    float salary;

};

int main()
{
    struct person person1 = {27, 2555.25};
    struct person person2, person3;

    //element wise assignment
    person2.age = 25;
    person2.salary = 23500.00;

    //structure variable assignment
    person3 = person2;

    printf("Person1: \n");
    printf("Age = %d\n", person1.age);
    printf("Salary = %.2f\n\n", person1.salary);

    printf("\nPerson2: \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.3f\n",person2.salary);

    printf("\nPerson3: \n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.3f\n",person3.salary);

    return 0;
}


