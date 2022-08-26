#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *head;

void Creation();
void Traversal();

int main() {
    Creation();
    Traversal();
    return 0;
}

void Creation() {
    struct Node *ptr, *cpt;
    int n;
    ptr = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data for the first node: ");
    scanf("%d", &ptr->data);
    ptr->prev = NULL;
    head = ptr;
    do {
        cpt = (struct Node *)malloc(sizeof(struct Node));
        
        printf("Enter data for the next node: ");
        scanf("%d", &cpt->data);

        ptr->next = cpt;
        cpt->prev = ptr;
        ptr = cpt;

        printf("Enter 1 for adding more nodes\n");
        scanf("%d", &n); 
    } while (n == 1);
    ptr->next = NULL;
}

void Traversal() {
     struct Node *ptr = head;
    do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=NULL);
}