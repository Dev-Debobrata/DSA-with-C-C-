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
    if (ptr->front == 0 && ptr->rear == 0)
    {
        return 1;
    }
    return 0;
}

int Is_Full(struct queue *ptr)
{
    if (((ptr->rear + 1) % ptr->max) == ptr->front)
    {
        return 1;
    }
    return 0;
}

int Enqueue(struct queue *ptr)
{
    int data;

    if (Is_Full(ptr))
    {
        printf("Overflow!\n");
        return 1;
    }

    printf("Enter the value you want to add: ");
    scanf("%d", &data);

    if (Is_Empty(ptr))
    {
        ptr->array[ptr->rear] = data;
        ptr->rear = ((ptr->rear + 1) % ptr->max);
        ptr->front = ((ptr->front + 1) % ptr->max);
        printf("First data added to the queue, now both front and rear is in 1\n");
        return 0;
    }

    ptr->array[ptr->rear] = data;
    ptr->rear = ((ptr->rear + 1) % ptr->max);
    printf("Data added to the queue, now rear is in %d\n", ptr->rear);
    return 0;
}

int Dequeue(struct queue *ptr)
{
    int data;
    if (Is_Empty(ptr))
    {
        printf("Underflow\n");
        return 1;
    }

    if (ptr->front = ptr->rear)
    {
        ptr->front = 0;
        ptr->rear = 0;
        printf("There is no data left in the queue; now both front and rear is at position 0");
        return 0;
    }

    data = ptr->array[ptr->front];
    ptr->front = ((ptr->front + 1) % ptr->max);
    printf("Data %d has been removed, new front is %d\n", data, ptr->front);
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
    if (position > ptr->max)
    {
        printf("The maximum number of elements inside queue is %d\n", ptr->max);
        return 0;
    }
    printf("The data at position %d is %d\n", position, ptr->array[position]);
}

int main()
{
    int n, p;
    struct queue *Queue;
    Queue = (struct queue *)malloc(sizeof(struct queue));
    Queue->front = 0;
    Queue->rear = 0;
    printf("Enter the size of the queue: ");
    scanf("%d", &Queue->max);
    Queue->array = (int *)malloc(Queue->max * (sizeof(int)));

    do
    {
        printf("\n\nEnter 1 to enqueue\nEnter 2 to dequeue\nEnter 3 to peek\n");
        scanf("%d", &n);

        if (n == 1)
        {
            Enqueue(Queue);
        }

        if (n == 2)
        {
            Dequeue(Queue);
        }

        if (n == 3)
        {
            Peek(Queue);
        }

        printf("Enter 1 to do more operations: ");
        scanf("%d", &p);
    } while (p == 1);

    return 0;
}
