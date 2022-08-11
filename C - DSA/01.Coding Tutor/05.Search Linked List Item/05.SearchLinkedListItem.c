#include<stdio.h>
#include<stdlib.h>

struct Node *createLinkedList(int arr[], int size);
int searchLinkedList(struct Node *head, int value);

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
    int a[] = {15, 30, 45, 60, 100};
    int size = sizeof(a) / sizeof(a[0]);
    printf("Size : %d\n", size);

    struct Node *head;
    head = createLinkedList(a, size);

    printLinkedList(head);

    int searchItem = 30;
    printf("Item Linked List Index: %d\n", searchLinkedList(head,searchItem));


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

