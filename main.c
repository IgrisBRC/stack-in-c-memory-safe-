#include "stack.h"

int main() {
  struct Node *head = init();

  push(head,69);
  push(head,69);
  push(head,69);
  push(head,69);
  push(head,69);
  push(head,69);

  free_er(head);
}

