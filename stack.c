#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void init(struct Stack *stack) { stack->top = NULL; };

void push(struct Stack *stack, int val) {
  struct Node *new_node = malloc(sizeof(struct Node));
  new_node->val = val;
  new_node->next = stack->top;

  stack->top = new_node;
}

int pop(struct Stack *stack) {
  if (!stack->top) {
    printf("dunderflow");
    exit(2);
  }

  struct Node *tmp = stack->top;
  int val = stack->top->val;
  stack->top = stack->top->next;
  free(tmp);

  return val;
}

void free_stack(struct Stack *stack) { free_for_me(stack->top); }

void free_for_me(struct Node *node) {
  if (node) {
    free_for_me(node->next);
    free(node);
  }
}

void print(struct Stack *stack) {
  print_for_me(stack->top);
  printf("None\n");
}

void print_for_me(struct Node *node) {
  if (node) {
    print_for_me(node->next);
    printf("%d -> ", node->val);
  }
}
