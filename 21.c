#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node{
    struct Node * next;
    int val;
} Node;

bool find(Node* curr, int num){
    Node * head = curr;
    while(head != NULL){
	if(head->val == num){
	    return true;
	}
	head = head->next;
    }
    return false;
}
int main(){
    Node n3 = {NULL, 25}, n2 = {&n3, 15}, n1 = {&n2, 5};
    int num1 = 15;
if (find(&n1, num1)) printf("true");
    
    
    
    return 0;
}
