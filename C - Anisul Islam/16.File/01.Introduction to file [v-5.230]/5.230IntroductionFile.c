#include<stdio.h>
//In C programming, File is place on disk where a group of related data is stored.
int main()
{
    FILE *file;

    file = fopen("test.txt","w"); // fopen("file name", "file modes");

    if(file == NULL)
    {
        printf("File doesn't exist.");

    }else
    {
        printf("File is opend.");
        fclose(file);
    }


    return 0;
}
