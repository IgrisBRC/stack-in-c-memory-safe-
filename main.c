#include "stack.h"

int main() {
  struct Node *head = malloc(sizeof(struct Node));
  new (head);

    push(head, 69);
    push(head, 69);
    push(head, 69);
    push(head, 69);
    push(head, 69);
    push(head, 69);

  print(head);
  free_er(head);
}
