#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int front;
    int rear;
    int max;
    int *array;
};

int Is_Empty(struct queue *ptr)
{
    if (ptr->front == -1 && ptr->front == -1)
    {
        return 1;
    }
    return 0;
}

int Is_Full(struct queue *ptr)
{
    if (ptr->rear == ptr->max - 1)
    {
        return 1;
    }
    return 0;
}

int Enqueue_Rear(struct queue *ptr)
{
    int data;

    if (Is_Full(ptr))
    {
        printf("Overflow\n");
        return 1;
    }

    printf("Enter the value you want to add: ");
    scanf("%d", &data);

    if (Is_Empty(ptr))
    {
        ptr->rear++;
        ptr->array[ptr->rear] = data;
        ptr->front++;
        printf("First data added to the queue, now front is in %d, rear is in %d\n", ptr->front, ptr->rear);
        return 0;
    }
    else
    {
        ptr->rear++;
        ptr->array[ptr->rear] = data;
        printf("Data added to the queue, now rear is in %d\n", ptr->rear);
        return 0;
    }
}

int Enqueue_Front(struct queue *ptr)
{
    int data;

    if (Is_Full(ptr))
    {
        printf("Overflow\n");
        return 1;
    }

    if (ptr->front == -1)
    {
        printf("Cannot enqueue data outside of an array\n");
        return 1;
    }

    printf("Enter the value you want to add: ");
    scanf("%d", &data);

    ptr->front--;
    ptr->array[ptr->front] = data;
    printf("Data added to the queue, now front is in %d\n", ptr->front);
    return 0;
}

int Dequeue_Front(struct queue *ptr)
{
    int data;
    if (Is_Empty(ptr))
    {
        printf("Underflow\n");
        return 1;
    }

    if (ptr->front == ptr->rear)
    {
        ptr->front = -1;
        ptr->rear = -1;
        printf("There is no more data int the queue, now front and rear is set back to -1\n");
        return 0;
    }

    ptr->front++;
    printf("Data removed, new front is %d\n", ptr->front);
    return 0;
}

int Dequeue_Rear(struct queue *ptr)
{
    int data;
    if (Is_Empty(ptr))
    {
        printf("Underflow\n");
        return 1;
    }

    if (ptr->front == ptr->rear)
    {
        ptr->front = -1;
        ptr->rear = -1;
        printf("There is no more data int the queue, now front and rear is set back to -1\n");
        return 0;
    }

    ptr->rear--;
    printf("Data removed, new rear is %d\n", ptr->rear);
    return 0;
}

int Peek(struct queue *ptr)
{
    int position, index;
    if (Is_Empty(ptr))
    {
        printf("There is nothing inside the queue, please fill it with some data\n");
        return 0;
    }
    printf("Enter the position where you want to peek: ");
    scanf("%d", &position);
    index = ((ptr->rear - position) + 1);
    printf("The data at position %d is %d\n", position, ptr->array[index]);
}

int main()
{
    int n, p;
    struct queue *Queue;
    Queue = (struct queue *)malloc(sizeof(struct queue));
    Queue->front = -1;
    Queue->rear = -1;
    printf("Enter the size of the queue: ");
    scanf("%d", &Queue->max);
    Queue->array = (int *)malloc(Queue->max * (sizeof(int)));

    do
    {
        printf("\n\nEnter 1 to enqueue from rear\nEnter 2 to enqueue from front\nEnter 3 to dequeue from front\nEnter 4 to dequeue from rear\nEnter 5 to peek\n");
        scanf("%d", &n);

        if (n == 1)
        {
            Enqueue_Rear(Queue);
        }

        if (n == 2)
        {
            Enqueue_Front(Queue);
        }

        if (n == 3)
        {
            Dequeue_Front(Queue);
        }

        if (n == 4)
        {
            Dequeue_Rear(Queue);
        }

        if (n == 5)
        {
            Peek(Queue);
        }

        printf("Enter 1 to do more operations: ");
        scanf("%d", &p);
    } while (p == 1);

    return 0;
}
