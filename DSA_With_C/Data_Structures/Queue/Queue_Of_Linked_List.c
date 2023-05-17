#include <stdio.h>
#include <stdlib.h>
  
struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node *front, *rear;
};

struct Node* newNode(int k)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = k;
    ptr->next = NULL;
    return ptr;
}

struct Queue* createQueue()
{
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

void enQueue(struct Queue* q, int k)
{
    struct Node* ptr = newNode(k);
    if (q->rear == NULL) {
        q->front = q->rear = ptr;
        return;
    }
    q->rear->next = ptr;
    q->rear = ptr;
}
  
void deQueue(struct Queue* q)
{
    if (q->front == NULL)
        return;
  
    struct Node* ptr = q->front;
  
    q->front = q->front->next;
  
    if (q->front == NULL)
        q->rear = NULL;
  
    free(ptr);
}

int main()
{
    struct Queue* q = createQueue();
    enQueue(q, 10);
    enQueue(q, 20);
    deQueue(q);
    deQueue(q);
    enQueue(q, 30);
    enQueue(q, 40);
    enQueue(q, 50);
    deQueue(q);
    printf("Queue Front : %d \n", q->front->data);
    printf("Queue Rear : %d", q->rear->data);
    return 0;
}