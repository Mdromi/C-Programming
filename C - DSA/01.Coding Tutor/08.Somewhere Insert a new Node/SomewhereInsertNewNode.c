#include<stdio.h>
#include<stdlib.h>

struct Node *createLinkedList(int arr[], int size);
int searchLinkedList(struct Node *head, int value);
struct Node *reverseLinkedList(struct Node *head);
struct Node *insertAtBeginning(struct Node *head, int data);
struct Node *insertAtTheEnd(struct Node *head, int data);
struct Node *insert(struct Node *head, int position, int value);

struct Node
{
    int data;
    struct Node *next;
};

//printing the Linked List
void printLinkedList(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main()
{
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = sizeof(a) / sizeof(a[0]);
    //printf("Size : %d\n", size);

    //Creating Linked List
    struct Node *head;
    head = createLinkedList(a, size);

    //Printing List
    printf("Linked List Item: ");
    printLinkedList(head);
    printf("\n");

    //Search Item
    int searchItem = 30;
    printf("Item %d Linked List Index: %d\n",searchItem, searchLinkedList(head,searchItem));

    //Reverse Linked List
    head = reverseLinkedList(head);
    printf("Reverse Linked List: ");
    printLinkedList(head);
    printf("\n");

    //Beginning Data Add
    int insertBegnning = 90;
    head = insertAtBeginning(head, insertBegnning);
    printf("Beginning Data(%d) Add: ", insertBegnning);
    printLinkedList(head);
    printf("\n");

    //Insert the Node End
    int insertEnd = 100;
    head = insertAtTheEnd(head, insertEnd);
    printf("Node last Data(%d) Add: ", insertEnd);
    printLinkedList(head);
    printf("\n");

    //Somewhere Insert new Node
    int nodePosition, nodeData;
    nodeData = 45;
    nodePosition = 6;
    head = insert(head, nodePosition, nodeData);
    printf("Node (%d)Position insert of Data(%d): ", nodePosition, nodeData);
    printLinkedList(head);
    printf("\n");


    return 0;
}

//Creating a linked list From array
struct Node *createLinkedList(int arr[], int size)
{
    int sizeArray = sizeof(arr) / sizeof(arr[0]);
    //printf("Size : %d\n", sizeArray);

    struct Node *head = NULL, *temp = NULL, *current = NULL;
    int i;

    for(i = 0; i < size; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}

//search linked list item
int searchLinkedList(struct Node *head, int value)
{
    int index = 1;
    while(head != NULL)
    {
        if(head->data == value)
        {
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}

//Reverse a Linked List
struct Node *reverseLinkedList(struct Node *head)
{
    struct Node *prev = NULL, *current = head, *next = NULL;

    while(current != NULL)
    {
        //Store the next node;
        next = current->next;

        //reverse next node
        current->next = prev;

        //propagate
        prev = current;
        current = next;
    }
    head = prev;

    return head;
}
//Insert the Node First
struct Node *insertAtBeginning(struct Node *head, int data)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;

    struct Node *newHead = temp;

    return newHead;
}
//Insert the Node End
struct Node *insertAtTheEnd(struct Node *head, int data)
{
    //create a new node with data
    struct Node *new_node= (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    if(head == NULL)
    {
        return new_node;
    }
    struct Node *current_node = head;
    //traverse and go to the and of list
    while(current_node->next != NULL)
    {
        current_node = current_node->next;
    }
    //insert
    current_node->next = new_node;

    return head;
}

//Somewhere Insert new Node
struct Node *insert(struct Node *head, int position, int value)
{
    struct Node *temp = head;
    int counter = 0;
    while(temp != NULL)
    {
        counter++;
        if(counter == position)
        {
            //insert your node here
            struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
            newNode->data = value;
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
