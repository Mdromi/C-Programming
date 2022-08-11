#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

//Last adding data of Node
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

//Node Count
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

//Node Search
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
    Node *n1, *head, *sear;

    n1 = create_node(10, NULL);
    head = n1;
    print_linkeed_list(head);

    head = prepend(head, 20);
    print_linkeed_list(head);

    head = append(head, 30);
    print_linkeed_list(head);

    int len = count(head);
    printf("Node len: %d\n", len);

    //search(head, 20)? printf("Yes\n") : printf("No\n");
    if(search(head, 10))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO!\n");
    }


    return 0;
}



