#include "ll.h"

extern int count;
extern int option;
extern int i;
extern int n;
extern int j;
extern float present;
extern char money;
extern float tdays;
extern int eligible;


struct Node *start = NULL;

void insert_at_begin(Student s) {
  struct Node *t;

  t = (struct Node*)malloc(sizeof(struct Node));
  t->student = s;
  count++;

  if (start == NULL) {
    start = t;
    start->next = NULL;
    return;
  }

  t->next = start;
  start = t;
}

void insert_at_end(Student s) {
  struct Node *t, *temp;

  t = (struct Node*)malloc(sizeof(struct Node));
  t->student = s;
  count++;

  if (start == NULL) {
    start = t;
    start->next = NULL;
    return;
  }

  temp = start;

  while (temp->next != NULL)
    temp = temp->next;

  temp->next = t;
  t->next   = NULL;
}

void print() {
  //printf("Present : %f\n",present);

  struct Node *t;

  t = start;

  if (t == NULL) {
    printf("No Student Records Found\n");


    return;
  }

  while (t != NULL) {
    printf("Name : %s\n", t->student.name);
    t = t->next;
  }

}

void traverse() {
  struct Node *t;

  t = start;

  if (t == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  while (t != NULL) {
    //printf("Present : %f\n", present);
    if(t->student.attend > present){
                printf("Student name = %s \n",t->student.name);
                printf("Student roll no. = %d \n",t->student.rno);
                printf(" Student fees = %c \n",t->student.fees);
                printf(" Student attendence = %f \n",t->student.attend);
                eligible++;
            }
    t = t->next;
  }
}

void delete(int a)
{
  struct Node *t;

  t = start;

  if (t == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  int pos=0;
  while (t != NULL) {
    if(t != NULL){
        if(t->student.rno == a) 
        {
           deleteNode(&start,pos);
           count --;
        }
    }
    t = t->next;
  }
}

void deleteNode(struct Node **head_ref, int position)
{
   // If linked list is empty
   if (*head_ref == NULL)
      return;

   // Store head node
   struct Node* temp = *head_ref;

    // If head needs to be removed
    if (position == 0)
    {
        *head_ref = temp->next;   // Change head
        free(temp);               // free old head
        return;
    }

    // Find previous node of the node to be deleted
    for (int i=0; temp!=NULL && i<position-1; i++)
         temp = temp->next;

    // If position is more than number of nodes
    if (temp == NULL || temp->next == NULL)
         return;

    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    struct Node *next = temp->next->next;

    free(temp->next);  // Free memory

    temp->next = next;  // Unlink the deleted node from list
}
