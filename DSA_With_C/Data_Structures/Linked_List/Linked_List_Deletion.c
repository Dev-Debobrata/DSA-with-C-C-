#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *first;

void Linked_List_Creation(void)
{
  struct Node *ptr, *cpt;
  int n;
  ptr = (struct Node *)malloc(sizeof(struct Node));

  printf("Enter data for the first node: ");
  scanf("%d", &ptr->data);

  first = ptr;

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

  ptr->next = NULL;
}

void Linked_List_Traversal(void)
{
  struct Node *ptr;

  ptr = (struct Node *)malloc(sizeof(struct Node));

  printf("Printing data of the linked list\n");

  ptr = first;

  while (ptr != NULL)
  {
    printf("The value is %d\n", ptr->data);
    ptr = ptr->next;
  }
}

void Delete_At_Beginning(void)
{
  struct Node *ptr;

  ptr = (struct Node *)malloc(sizeof(struct Node));

  if (ptr == NULL)
  {
    printf("Overflow");
    return;
  }

  ptr = first;
  ptr = ptr->next;
  first = ptr;
}

void Delete_At_Between(void)
{
  struct Node *ptr, *cpt;
  int index, i = 0;

  ptr = (struct Node *)malloc(sizeof(struct Node));
  cpt = (struct Node *)malloc(sizeof(struct Node));

  if (ptr == NULL || cpt == NULL)
  {
    printf("overflow");
    return;
  }

  cpt = first;

  printf("Enter the index where to delete: ");
  scanf("%d", &index);

  while (i != index - 1)
  {
    cpt = cpt->next;
    i++;
  }

  ptr->next = cpt->next;
  ptr = ptr->next;
  cpt->next = ptr->next;
}

void Delete_At_End(void)
{
  struct Node *ptr, *cpt;

  ptr = (struct Node *)malloc(sizeof(struct Node));
  cpt = (struct Node *)malloc(sizeof(struct Node));

  if (ptr == NULL || cpt == NULL)
  {
    printf("overflow");
    return;
  }

  ptr = first;
  cpt = ptr->next;

  while( cpt->next != NULL) {
    ptr = ptr->next;
    cpt = cpt->next;
  }

  ptr->next = NULL;
  free(cpt);
}

int main()
{
  int n;

  Linked_List_Creation();

  printf("List before deletion\n");
  Linked_List_Traversal();

  printf("Enter '1' for deleting node at the beginning, '2' for deleting node between two nodes, '3' for deleting node at the end: ");
  scanf("%d", &n);

  if (n == 1)
  {
    Delete_At_Beginning();

    printf("After deletion at the beginning\n");
    Linked_List_Traversal();
  }

  if (n == 2)
  {
    Delete_At_Between();

    printf("After deletion between two nodes\n");
    Linked_List_Traversal();
  }

  if (n == 3)
  {
    Delete_At_End();

    printf("After deletion at the end\n");
    Linked_List_Traversal();
  }

  return 0;
}