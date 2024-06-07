#include "stack.h"
#include <stdio.h>

int main() {
    struct Node *head;
    new(head);

    push(head,69);

    print(head);
}

