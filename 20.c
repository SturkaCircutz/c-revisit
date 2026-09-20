#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    struct Node * next;
    int val;
}Node;

void insert(Node ** curr, int num){
    Node* nu = malloc(sizeof(Node));
    nu->next = *curr;
    nu->val = num;
    *curr = nu;
    
}
void print_all(Node * curr){
    Node dum = curr;
    while(!dum){
	printf("")
    }
}
int main(){
    Node  * curr = malloc(sizeof(Node));
    curr -> val = 10;
    int num;
    printf("enter the insertion value: \n");
    scanf("%d", &num);
    insert(&curr, num);
    printf("current head is %d", curr->val);
    
}
