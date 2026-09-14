#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};
struct Node* add_back(struct Node * head, int num){
    struct Node *new_node = malloc(sizeof(struct Node));
    new_node->data = num;
    new_node->next = head;
    head = new_node;
    return head;
}
int main(){
    struct Node * head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;
    
    int num;
    printf("give a number: \n");
    scanf("%d", &num);
    printf("%d", add_back(head, num)->data);

}