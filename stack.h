
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int val;
  struct Node *next;
};

void free_er(struct Node *);
void push(struct Node *, int);
int pop(struct Node *);
void print(struct Node *);
bool is_empty(struct Node *);
int peek(struct Node *);
void new(struct Node *);
