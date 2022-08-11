#include<stdio.h>
int main()
{
    char str1[30];
    char str2[30];
    char temp[30];

    printf("Enter the first String: ");
    gets(str1);

    printf("Enter the second String: ");
    gets(str2);

    printf("\nBefore Swapping the string:\n");
    printf("First String = %s\n",str1);
    printf("Second String = %s\n",str2);

    //Swapping the string
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);


    printf("\nAfter Swapping the string:\n");
    printf("Swapping first string = %s\n",str1);
    printf("Swapping second string = %s\n",str2);



    return 0;
}






