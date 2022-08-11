#include <stdio.h>

struct book
{
    char name[20];
    int price;
};

int main()
{
    typedef char LETTER;

    LETTER ch;
    ch = 'A';
    printf("ch = %c\n",ch);

    typedef struct book Book;
    Book b = {"Amar jibonkotha",350};
    printf("Book Name = %s\n",b.name);
    printf("Book Price = %d\n",b.price);


    return 0;
}

