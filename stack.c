#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

void init(struct Node *head) {
  head->val = 0;
  head->next = NULL;
};

void free_er(struct Node *head) {
  if (head) {
    free_er(head->next);
    free(head);
  }
}

void push(struct Node *head, int val) {
  struct Node *itr = head;

  while (itr->next) {
    itr = itr->next;
  }

  itr->next = (struct Node *)malloc(sizeof(struct Node));
  itr = itr->next;
  itr->val = val;
}

int pop(struct Node *head) {

  if (!head->next) {
    printf("underflow\n");
    exit(2);
  }

  struct Node *itr = head;

  while (itr->next->next) {
    itr = itr->next;
  }

  int res = itr->next->val;
  free(itr->next);
  itr->next = NULL;
  return res;
}

int peek(struct Node *head) {
  struct Node *itr = head;

  while (itr->next) {
    itr = itr->next;
  }

  return itr->val;
}

bool is_empty(struct Node *head) { return head->next; }

void print(struct Node *head) {
  struct Node *itr = head->next;

  while (itr) {
    printf("%d -> ", itr->val);
    itr = itr->next;
  }
  printf("None\n");
}
