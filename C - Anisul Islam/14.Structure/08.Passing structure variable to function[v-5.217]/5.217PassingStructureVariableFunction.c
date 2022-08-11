#include<stdio.h>

//global structure
struct person
{
    char name[50];
    int age;
    float salary;

};

void display(struct person p)
{
    printf("Information for Person:\n");

        printf("\nName: %s\n",p.name);
        printf("Age: %d\n",p.age);
        printf("Salary: %.2f\n",p.salary);
}

int main()
{
    struct person person1, person2;

    strcpy(person1.name,"MD Romi");
    person1.age = 18;
    person1.salary = 11520.5;

    display(person1);

    strcpy(person2.name,"VP Romi");
    person1.age = 21;
    person1.salary = 16000;

    display(person2);


    return 0;
}





