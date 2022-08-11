#include<stdio.h>
struct person
{
    char name[50];
    int age;
    float salary;
};
int main()
{
    FILE *file;

    struct person person[100];
    int i,n;

    file = fopen("test.txt","a"); // fopen("file name", "file modes");

    if(file == NULL)
    {
        printf("File doesn't exist.\n");

    }else
    {
        printf("File is opened.\n");

        printf("Enter person:");
        scanf("%d",&n);

        for(i = 0; i<n; i++)
        {
            printf("\nEnter information for Person %d\n",i+1);

            printf("Enter name: ");
            fflush(stdin);
            gets(person[i].name);

            printf("Enter your age: ");
            scanf("%d",&person[i].age);

            fprintf(file,"%d.\nName: %s\nAge: %d\n",i+1,person[i].name, person[i].age); //fprintf(filePointer,format specifiers,variable name);

            fputs("\n",file);
        }

        printf("File is written is success fully.\n");

        fclose(file);
    }


    return 0;
}




