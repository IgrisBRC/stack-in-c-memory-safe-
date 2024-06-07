#include "stack.h"
#include <stdlib.h>

int main() {
  struct Stack *stack = malloc(sizeof(struct Stack));
  init(stack);

    //use the stack

  print(stack);

  free_stack(stack);
  free(stack);
}
