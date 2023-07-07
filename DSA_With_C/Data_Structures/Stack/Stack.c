#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *array;
};

int Is_Empty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Is_Full(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Creation(struct stack *ptr)
{
    int n, val;
    do
    {
        if (Is_Full(ptr))
        {
            printf("Stack Overflow!");
            return;
        }

        printf("Enter data you want to add: ");
        scanf("%d", &val);

        ptr->top++;
        ptr->array[ptr->top] = val;

        printf("Enter 1 to enter more data: ");
        scanf("%d", &n);
    } while (n == 1);
}

void Push(struct stack *ptr)
{
    int val;
    if (Is_Full(ptr))
    {
        printf("Stack Overflow!");
        return;
    }
    printf("Enter data to push in the stack: ");
    scanf("%d", &val);

    ptr->top++;
    ptr->array[ptr->top] = val;

    printf("New data %d added at the new top %d\n", val, ptr->top);
}

void Pop(struct stack *ptr)
{
    int val;
    if (Is_Empty(ptr))
    {
        printf("Stack Underflow!");
        return;
    }
    val = ptr->array[ptr->top];
    ptr->top--;
    printf("%d is popped from the stack, new top is %d", val, ptr->top);
}

void Peek(struct stack *ptr)
{
    int index, position;
    if (Is_Empty(ptr))
    {
        printf("Stack Underflow!");
        return;
    }

    printf("Enter the position you want to peek: ");
    scanf("%d", &position);

    index = ((ptr->top - position) + 1);

    printf("At position %d data is %d\n", position, ptr->array[index]);
}

void Stack_Top(struct stack *ptr)
{
    int val = ptr->array[ptr->top];
    printf("The current top of the stack is %d and it's value is: %d\n", ptr->top, val);
}

void Stack_Bottom(struct stack *ptr)
{
    printf("The value at the bottom of the stack is: %d", ptr->array[0]);
}

int main()
{
    struct stack *s;
    int n, p;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->array = (int *)malloc(s->size * sizeof(int));

    Creation(s);

    do
    {
        printf("\n\nPress 1 to peek\nPress 2 to push\nPress 3 to pop\nPress 4 to check Top of stack\nPress 5 to check Bottom of stack\n");
        scanf("%d", &n);

        if (n == 1)
        {
            Peek(s);
        }
        if (n == 2)
        {
            Push(s);
        }
        if (n == 3)
        {
            Pop(s);
        }
        if (n == 4)
        {
            Stack_Top(s);
        }
        if (n == 5)
        {
            Stack_Bottom(s);
        }

        printf("\nPress 1 to do more operations: ");
        scanf("%d", &p);
    } while (p == 1);

    return 0;
}
