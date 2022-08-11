#include<stdio.h>
int main()
{
    FILE *file;
    char ch[40];

    file = fopen("test.txt","r"); // fopen("file name", "file modes");

    if(file == NULL)
    {
        printf("File doesn't exist.\n");

    }else
    {
        printf("File is opened.\n");

        while(!feof(file))
        {
            fgets(ch, 50, file); //fgets(variable, size, filePointer);
            printf("%s",ch);
        }

        fclose(file);
    }


    return 0;
}




