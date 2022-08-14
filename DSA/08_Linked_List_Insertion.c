#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

// Insert at the beginning of the list
struct Node * insertAtFirst(struct Node *head, int data) {
  struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
  ptr->next = head;
  ptr->data = data;
  return ptr;
};

// Insert at middle of the list
struct Node * insertAtIndex(struct Node *head, int data, int index) {
  int i = 0;
  
  struct  Node *p = head;
  struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
  ptr->data = data;

  while (i != (index - 1)) {
    p = p->next;
    i++;
  }

  ptr->next = p->next;
  p->next = ptr;
  
  return head;
};

// insert at the end of the list
struct Node * insertAtEnd(struct Node *head, int data) {
  int i = 0;
  
  struct  Node *p = head;
  struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
  ptr->data = data;

  while (p->next != NULL) {
    p = p->next;
    i++;
  }
  p->next = ptr;
  ptr->next = NULL;
  
  return head;
};

// insert after a node
struct Node * insertAfterNode(struct Node *head, struct Node *previousNode, int data) {
  struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
  ptr->data = data;

  ptr->next = previousNode->next;
  previousNode->next = ptr;
  
  return head;
};

// printing the list
void linkedListTraversal(struct Node *ptr)
{
  while (ptr != NULL)
  {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
  }
  printf("List Ended\n");
}

int main()
{
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;

  // Allocate memory for nodes in the linked list in Heap
  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));

  // Link first and second nodes
  head->data = 7;
  head->next = second;

  // Link second and third nodes
  second->data = 11;
  second->next = third;

  // Link third and fourth nodes
  third->data = 41;
  third->next = fourth;

  // Terminate the list at the third node
  fourth->data = 66;
  fourth->next = NULL;

  linkedListTraversal(head);

  head = insertAtFirst(head, 56);
  linkedListTraversal(head);

  head = insertAtIndex(head, 77, 2);
  linkedListTraversal(head);

  head = insertAtEnd(head, 100);
  linkedListTraversal(head);

  head = insertAfterNode(head, second, 33);
  linkedListTraversal(head);

  return 0;
}