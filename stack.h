
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int val;
  uint8_t size;
  struct Node *next;
};

void free_er(struct Node *);
void free_for_me(struct Node *);
void push(struct Node *, int);
int pop(struct Node *);
void print(struct Node *);
bool is_empty(struct Node *);
int peek(struct Node *);
struct Node init();

struct Node init() {
  struct Node new_node = {0, 0, NULL};
  return new_node;
};

void free_er(struct Node *head) {
  struct Node *itr = head->next;
  free_for_me(itr);
}

void free_for_me(struct Node *itr) {
  if (itr) {
    free_for_me(itr->next);
    free(itr);
  }
}

void push(struct Node *head, int val) {
  struct Node *itr = head;

  while (itr->next) {
    itr = itr->next;
  }

  itr->next = malloc(sizeof(struct Node));
  itr = itr->next;
  itr->val = val;
  head->size += 1;
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
  head->size -= 1;
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
