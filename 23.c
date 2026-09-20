#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node{
    struct Node * next;
    int val;
};

struct LinkedList{
    struct Node * front;
    struct Node * rear;
};

void add_node(struct LinkedList * l1, int num1){
    struct Node * nu = malloc(sizeof(struct Node));
    nu->val = num1;
    nu->next = NULL;
    if(!l1->front){
	l1->front = nu;
	l1->rear = nu;
	return;
    }
    l1->rear->next = nu;
    l1->rear = nu;
    
    
}
void del_node(struct LinkedList * l1){
    if(!l1->front){
	printf("cant delete\n");
	return;
    }
    struct Node *tmp = l1->front;
    l1->front = l1->front->next;
        if(!l1->front){
	l1->rear = NULL;
    }

    free(tmp);
    
    
}
int main(){
    struct LinkedList * l1 = malloc(sizeof(struct LinkedList));
    l1->front = NULL;
    l1->rear = NULL;
    while(true){
	int choice;
	printf("add your choice: \n");
	scanf("%d", &choice);
	printf("add a number to the linked list: \n");
	int num1;
	scanf("%d", &num1);
	if(choice == 1){
	    add_node(l1,num1);
	}else{
	    del_node(l1);
	}

    }
    free(l1);
}
