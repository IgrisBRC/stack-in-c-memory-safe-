#include <stdlib.h>
#include "stack.h"

int main() {
  struct Node *head = malloc(sizeof(struct Node));
  init (head);

    push(head, 69);
    push(head, 69);
    push(head, 69);
    push(head, 69);
    push(head, 69);
    push(head, 69);

  print(head);
  free_er(head);
}
