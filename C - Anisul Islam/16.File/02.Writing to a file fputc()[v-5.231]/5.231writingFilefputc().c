#include<stdio.h>
int main()
{
    FILE *file;
    char name[50] = "MD Romi as a web programmer.";

    int length = strlen(name);
    int i;

    file = fopen("test.txt","w"); // fopen("file name", "file modes");

    if(file == NULL)
    {
        printf("File doesn't exist.\n");

    }else
    {
        printf("File is opend.\n");

        for(i=0; i<length; i++)
        {
            fputc(name[i],file);
        }
        printf("File is written is success fully.\n");

        fclose(file);
    }


    return 0;
}

