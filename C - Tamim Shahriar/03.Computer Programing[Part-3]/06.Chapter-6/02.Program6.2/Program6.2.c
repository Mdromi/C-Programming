#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node
{
    int data;
    Node *next;
};

//Creating Node
Node *create_node(int item, Node *next)
{
    Node *new_node = (Node *) malloc(sizeof(Node));

    if(new_node == NULL)
    {
        printf("Error! Could Not Crate A New Node\n");
        exit(1);
    }

    new_node->data = item;
    new_node->next = next;

    return new_node;
}

//First adding data of Node
Node *prepend(Node *head, int item)
{
    Node *new_node = create_node(item, head);
    return new_node;
}

int main()
{
    Node *n1, *n2, *n3, *head;

    n1 = create_node(10, NULL);
    head = n1;

    head = prepend(head, 20);
    n2 = head;

    printf("data = %d\n", n1->data);
    printf("First data = %d\n", n2->data);

    n3 = n2->next;
    printf("Second data = %d\n", n3->data);


    return 0;
}
