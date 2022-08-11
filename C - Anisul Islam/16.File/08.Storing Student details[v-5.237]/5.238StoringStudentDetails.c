#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age,phoneNumber,num,i;

    file = fopen("student.txt","a");

    if(file == NULL)
    {
        printf("File doesn't exist.\n");

    }else
    {
        printf("File is opened.\n");

        printf("Enter number of students: ");
        scanf("%d",&num);

        for(i=1; i<=num; i++)
        {
            printf("\nEnter information for Student %d\n",i);

            printf("Enter student name: ");
            fflush(stdin);
            gets(name);

            printf("Enter student age: ");
            scanf("%d",&age);

            printf("Enter student phone number: ");
            scanf("%d",&phoneNumber);

            fprintf(file,"\n%s\t\t%d\t%d\n",name,age,phoneNumber);
        }

        fclose(file);
    }


    getch();
}

