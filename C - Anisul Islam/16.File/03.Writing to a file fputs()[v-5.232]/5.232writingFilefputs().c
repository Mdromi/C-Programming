#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];

    int length = strlen(name);
    int i;

    file = fopen("test.txt","a"); // fopen("file name", "file modes");

    if(file == NULL)
    {
        printf("File doesn't exist.\n");

    }else
    {
        printf("File is opened.\n");

        printf("Enter your full name: ");
        gets(name);

        fputs(name,file); //fputs(string, file name);
        fputs("\n",file);

        printf("File is written is success fully.\n");

        fclose(file);
    }


    return 0;
}


