#pragma once
#include <stdbool.h>
#include <stdint.h>

struct Stack {
  struct Node *top;
};

struct Node {
  int val;
  struct Node *next;
};

void free_stack(struct Stack *stack);
void free_for_me(struct Node *);
void print_for_me(struct Node *);
void push(struct Stack *, int);
int pop(struct Stack *);
void print(struct Stack *);
void init(struct Stack *);
