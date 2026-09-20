#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node * next;
    int val;
};

int main(){
    struct Node n3 = {NULL, 10}, n2 = {&n3, 20}, n1 = {&n2, 5};
    struct Node h1 = n1;
    while(h1.next != NULL){
	if(h1.val == 40){
	    printf("yes we found it");
	}
	h1 = *(h1.next);
    }
    return 0;
}
