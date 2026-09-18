#include <stdio.h>
#include <stdlib.h>
struct Node {
  struct Node *next;
  int val;
};
// To execute C, please define "int main()"
void delete(struct Node **l1, int num) {
struct Node * curr = *l1;
struct Node * prev = NULL;
while(curr && curr->val != num){
    prev = curr;
    curr = curr->next;
}
struct Node * tmp = curr;
prev->next = curr->next;
curr = curr->next;
free(tmp);
}
int main() {
  struct Node *n1 = malloc(sizeof(struct Node));
  struct Node *n2 = malloc(sizeof(struct Node));
  struct Node *n3 = malloc(sizeof(struct Node));
  n3->next = NULL;
  n3->val = 25;

  n2->next = n3;
  n2->val = 20;

  n1->next = n2;
  n1->val = 10;
  struct Node *h1 = n1;
  delete (&n1, 25);
  
  while(h1){
    printf("%d", h1->val);
    h1 = h1->next;
  }
}
