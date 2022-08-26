#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void Circular_Linked_List_Creation();
void Circular_Linked_List_Traversal();
void Insert_At_Beginning();
void Delete_At_Beginning();

int main()
{
    int n;

    Circular_Linked_List_Creation();
    Circular_Linked_List_Traversal();

    printf("\n\nPress 1 for insertion at beginning.\nPress 2 for deletion at beginning.\n");
    scanf("%d", &n);

    if (n == 1) {
        Insert_At_Beginning();
        Circular_Linked_List_Traversal();
    }

    if (n == 2) {
        Delete_At_Beginning();
        Circular_Linked_List_Traversal();
    }

    return 0;
}

void Circular_Linked_List_Creation()
{
    struct Node *ptr, *cpt;
    int n;
    ptr = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data for the first node: ");
    scanf("%d", &ptr->data);

    head = ptr;

    do
    {
        cpt = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data for the next node: ");
        scanf("%d", &cpt->data);

        ptr->next = cpt;
        ptr = cpt;

        printf("Enter '1' for making another node: ");
        scanf("%d", &n);
    } while (n == 1);

    ptr->next = head;
}

void Circular_Linked_List_Traversal()
{
    struct Node *ptr = head;
    printf("Printing data of the linked list\n");
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

void Insert_At_Beginning()
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    
    printf("Enter data for the node: ");
    scanf("%d", &ptr->data);
 
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
}

void Delete_At_Beginning() {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = head;
    ptr = ptr->next;

    struct Node * cpt = head->next;
    while(cpt->next != head){
        cpt = cpt->next;
    }

    cpt->next = ptr;
    head = ptr;
}