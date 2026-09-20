#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node * next;
    int val;
};

struct Node * mid(struct Node * head){
    struct Node * slow = head;
    struct Node * fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main(){
    struct Node n3 = {
        NULL,
        30,
    };
    struct Node n2 = {
        &n3,
        20,
    };
    struct Node n1 = {
        &n2,
        10,
    };
    struct Node * d = mid(&n1);
    printf("%d", d->val);

}