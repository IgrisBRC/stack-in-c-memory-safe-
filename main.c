#include "stack.h"

int main() {
  struct Node *head = malloc(sizeof(struct Node));
  new(head);
  print(head);
  free_er(head);
}
