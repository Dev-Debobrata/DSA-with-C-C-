// Program not working
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
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

void Push(struct stack *ptr, char val)
{
    if (Is_Full(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char Pop(struct stack *ptr)
{
    if (Is_Empty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

char Stack_Top(struct stack *sp)
{
    return sp->arr[sp->top];
}

int Is_parenthesis(char ch)
{
    if (ch == '(' || ch == '{' || ch == '[' || ch == ')' || ch == '}' || ch == ']')
    {
        return 1;
    }
    return 0;
}

int match(char a, char b)
{
    if (a == '{' && b == '}')
    {
        return 1;
    }
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    return 0;
}

int Is_Operator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    else
        return 0;
}

int Precedence(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 0;
}

char *Infix_To_Postfix(char *infix, struct stack *Stack, char *postfix)
{
    int i = 0;
    int j = 0;
    while (infix[i] != '\0')
    {
        if (!Is_Operator(infix[i]) && !Is_parenthesis(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (!Is_parenthesis(infix[i]))
            {
                if (Precedence(infix[i]) > Precedence(Stack_Top(Stack)))
                {
                    Push(Stack, infix[i]);
                    i++;
                }
                else
                {
                    postfix[j] = Pop(Stack);
                    j++;
                }
            }
            else
            {
                if (infix[i] == '(' || infix[i] == '{' || infix[i] == '[')
                {
                    Push(Stack, infix[i]);
                    i++;
                }
                else
                {
                    for (int k = 0; k < Stack->top; k++)
                    {
                        if (!match(infix[i], Stack->arr[k]))
                        {
                            k++;
                        }
                        else
                        {
                            int l = 0;
                            while (Stack->arr[l] != Stack->arr[k])
                            {
                                l++;
                            }
                            while (Stack->top != l)
                            {
                                postfix[j] = Stack->arr[Stack->top];
                                j++;
                                Pop(Stack);
                                Stack->top--;
                            }
                            Pop(Stack);
                            Stack->top--;
                            i++;
                        }
                    }
                }
            }
        }
    }
    while (!Is_Empty(Stack))
    {
        postfix[j] = Pop(Stack);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infix = "5*(6+2)-(12/4)";

    struct stack *Stack = (struct stack *)malloc(sizeof(struct stack));
    Stack->size = 10;
    Stack->top = -1;
    Stack->arr = (char *)malloc(Stack->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));

    printf("postfix is %s\n", Infix_To_Postfix(infix, Stack, postfix));
    return 0;
}
