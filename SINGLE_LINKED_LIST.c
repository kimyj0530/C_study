/* SINGGLE_LINKED_LIST */

#include <stdio.h>
#include <stdlib.h>

struct node {
  int          data;
  struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

void list_push(int data) {
  struct node* new_node = calloc(1, sizeof(new_node));
  new_node->data = data;
  new_node->next = NULL;
  if(NULL == head) {
    head = new_node;
    tail = new_node;
    return;
  }
  tail->next = new_node;
  tail       = new_node;
  return;
}

void list_pop(void){
  if(NULL == head) { return; }
  struct node* buffer = head;
  head                = head->next;
  free(buffer);
  return;
}

void list_print(void){
  struct node* ptr = head;
  while(NULL != ptr) {
    printf("%p: %d | next: %p\n", ptr, ptr->data, ptr->next);
    ptr = ptr->next;
  }
  return;
}

int main(void){
  list_push(1);
  list_push(2);
  list_pop();
  list_print();
  return (EXIT_SUCCESS);
}
