#include<stdio.h>

#define Q_SIZE 5

typedef struct
{
    int data[Q_SIZE + 1];
    int head, tail;
}Queue;

void enqueue(Queue *q, int item)
{
    if((q->tail + 1) %  (Q_SIZE + 1) == q->head)
    {
        printf("Queue is full\n");
        return;
    }
    q->data[q->tail] = item;
    q->tail = (q->tail + 1) % (Q_SIZE + 1);
}

int dequeue(Queue *q)
{
    int item;
    if(q->tail == q->head)
    {
        printf("Queue is empty\n");
        return;
    }

    item = q->data[q->head];
    q->head = (q->head + 1) % (Q_SIZE + 1);

    return item;

}

int main()
{
    Queue my_q;
    int item;

    my_q.head = 0;
    my_q.tail = 0;

    enqueue(&my_q, 1);
    printf("tail = %d\n", my_q.tail);
    enqueue(&my_q, 2);
    printf("tail = %d\n", my_q.tail);
    enqueue(&my_q, 3);
    printf("tail = %d\n", my_q.tail);
    enqueue(&my_q, 4);
    printf("tail = %d\n", my_q.tail);
    enqueue(&my_q, 5);
    printf("tail = %d\n", my_q.tail);
    enqueue(&my_q, 6);
    printf("tail = %d\n", my_q.tail);

    printf("\nbeginning head = %d\n", my_q.head);
    item = dequeue(&my_q);
    printf("item = %d, head = %d\n", item, my_q.head);
    item = dequeue(&my_q);
    printf("item = %d, head = %d\n", item, my_q.head);
    item = dequeue(&my_q);
    printf("item = %d, head = %d\n", item, my_q.head);
    item = dequeue(&my_q);
    printf("item = %d, head = %d\n", item, my_q.head);
    item = dequeue(&my_q);
    printf("item = %d, head = %d\n", item, my_q.head);
    item = dequeue(&my_q);


    enqueue(&my_q, 6);
    printf("tail = %d\n", my_q.tail);

    printf("item = %d, head = %d\n", item, my_q.head);
    printf("\nbeginning head = %d\n", my_q.head);



    return 0;
}
