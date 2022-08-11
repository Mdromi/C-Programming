#include<stdio.h>
int main()
{
    FILE *file;
    char fname[40];
    char lname[40];

    file = fopen("test.txt","r");

    if(file == NULL)
    {
        printf("File doesn't exist.\n");

    }else
    {
        printf("File is opened.\n");

        fscanf(file,"%s %s",&fname,&lname); //fscanf(filePointer, format specifier, variable);
        printf("%s %s\n",fname,lname);

        fclose(file);
    }


    return 0;
}





