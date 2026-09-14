#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };

void push(struct Node **head_ref, int new_val) {
    struct Node *new_node = malloc(sizeof(struct Node));
    new_node->data = new_val;
    new_node->next = *head_ref; // New node points to old head
    *head_ref = new_node;       // Head now points to new node
}

void printList(struct Node *n) {
    while (n != NULL) { printf("%d -> ", n->data); n = n->next; }
    printf("NULL\n");
}

int main() {
    struct Node *head = malloc(sizeof(struct Node));
    head->data = 10; head->next = NULL;

    printf("Existing List: "); printList(head);
    push(&head, 20);
    printf("After Push(20): "); printList(head);
    return 0;
}
