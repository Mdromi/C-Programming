#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node Node;

struct node
{
    int data;
    Node *next;
};

//Creating Node[6.1]
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

//First adding data of Node[6.2]
Node *prepend(Node *head, int item)
{
    Node *new_node = create_node(item, head);
    return new_node;
}

//Last adding data of Node[6.3]
Node *append(Node *head, int item)
{
    Node *new_node = create_node(item, NULL);

    if(head == NULL)
    {
        return new_node;
    }

    Node *current_node = head;

    while(current_node->next != NULL)
    {
        current_node = current_node->next;
    }
    current_node->next = new_node;

    return head;
}

//Node Count[6.4.1]
int count(Node *head)
{
    int counts = 0;
    Node *current_node = head;

    while(current_node != NULL)
    {
        counts++;
        current_node = current_node->next;
    }
    //printf("Node len: %d\n", counts);

    return counts;
}

//Node Search[6.4.2]
Node *search(Node *head, int item)
{
    Node *current_node = head;

    while(current_node != NULL)
    {
        if(current_node->data == item)
        {
            return true;
        }
        current_node = current_node->next;
    }

    return false;
}

//Remove Node[6.5]
Node *remove_node(Node *head, Node *node)
{
    // if node equal first node
    if(node == head)
    {
        head = node->next;
        free(node);

        return head;
    }

    // if node equal first node
    Node *current_node = head;

    while(current_node != NULL)
    {
        if(current_node->next == node)
        {
            break;
        }
        current_node = current_node->next;
    }

    if(current_node == NULL)
    {
        return head;
    }
    current_node->next = node->next;

    free(node);

    return head;
}

//Insert Data[6.5]
void insert(Node *node, int item)
{
    Node *new_node = create_node(item, node->next);
    node->next = new_node;
}

//Printing Linked List
void print_linkeed_list(Node *head)
{
    Node *current_node = head;
    while(current_node != NULL)
    {
        printf("%d ",current_node->data);
        current_node = current_node->next;
    }
    printf("\n");
}

int main()
{
    Node *n1, *head, *n2;

    n1 = create_node(10, NULL);
    head = n1;
    print_linkeed_list(head);

    head = prepend(head, 20);
    print_linkeed_list(head);

    head = append(head, 30);
    print_linkeed_list(head);

    int len = count(head);
    printf("Node len: %d\n", len);

    //Search a data
    search(head, 20)? printf("Yes\n") : printf("No\n");

    //Removing Node
    n2 = head;
    head = remove_node(head, n2);

    n2 = head;
    head = remove_node(head, n2);
    print_linkeed_list(head);

    n2 = head;
    insert(n2, 20);
    insert(n2, 10);
    print_linkeed_list(head);


    return 0;
}




