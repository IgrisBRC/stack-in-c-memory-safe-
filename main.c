#include "stack.h"

int main() {
  struct Node head = init();

  int num = 420;

  push(&head,num);
  push(&head,num);
  push(&head,num);
  push(&head,num);
  push(&head,num);
  push(&head,num);
  push(&head,num);
  push(&head,num);
  push(&head,num);

  free_er(&head);
}

