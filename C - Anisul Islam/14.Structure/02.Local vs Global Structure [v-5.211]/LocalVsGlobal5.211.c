#include<stdio.h>
//structure is a collection of variables of different types under a single name.

//global structure
struct person
{
    int age;
    float salary;

};

// diclear structure variable
    struct person person1, person2; // global variable

int main()
{
    //Local structure
    struct person
    {
        int age;
        float salary;
    };

    // diclear structure variable
    //struct person person1, person2; // local variable

    person1.age = 27;
    person1.salary = 12750.50;

    printf("Person1: \n");
    printf("Age = %d\n", person1.age);
    printf("Salary = %.2f\n\n", person1.salary);

    person2.age = 19;
    person2.salary = 25000.500;

    printf("Person2: \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.3f\n",person2.salary);

    return 0;
}

