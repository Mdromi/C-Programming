#include<stdio.h>
#include <stdlib.h>
typedef struct node Node;

struct node
{
    int data;
    Node *next;
    Node *prev;
};

//Creating Node;
Node *create_node(int item, Node *next, Node *prev)
{
    Node *new_node = (Node *)malloc(sizeof(Node));

    if(new_node == NULL)
    {
        printf("Error! Could Not Create A New Node\n");
        exit(1);
    }

    new_node->data = item;
    new_node->next = next;
    new_node->prev = prev;

    return new_node;
}

//Adding Node on head;
Node *prepend(Node *head, int item)
{
    Node *new_node = create_node(item, head, NULL);
    new_node->next->prev = new_node;

    return new_node;
}

//Adding Node on last
Node *append(Node *head, int item)
{
    Node *new_node = create_node(item, NULL, NULL);

    if(head = NULL)
    {
        printf("Head = NULL");
        return new_node;
    }

    Node *current_node =  head;

    int count = 0;
    while(current_node->next != NULL)
    {
        current_node = current_node->next;
        count++;
    }
    printf("Count: %d\n", count);
    current_node->next = new_node;
    new_node->prev = current_node;

    return head;
}

//Remove Node
Node *remove_node(Node *head, Node *node)
{
    if(node == head)
    {
        head = node->next;
        head->prev = NULL;
        free(node);
        return head;
    }
    Node *previous_node = node->prev;
    Node *next_node = node->next;

    previous_node->next = next_node;
    next_node->prev = previous_node;

    free(node);

    return head;
}

//Print the linked list
void print_linked_list(Node *head)
{
    Node *current_node = head;
    while(current_node != NULL)
    {
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
    printf("\n");

}

int main()
{
    Node *n1, *n2, *head;

    //Creating a node
    n1 = create_node(10, NULL, NULL);
    //printf("Data = %d\n", n1->data);
    head = n1;
    print_linked_list(head);

    //Adding the value on first node
    head = prepend(head, 20);
    print_linked_list(head);

    //Adding the value on last node
    head = append(head, 30);
    print_linked_list(head);

    //remove node
    head = remove_node(head, n1);
    print_linked_list(head);

    return 0;
}
