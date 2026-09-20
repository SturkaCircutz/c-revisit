// to get the highest bit
#include <stdio.h>

int main(){
    int num;
    printf("Input any number: \n");
    scanf("%d", &num);
    int count = 0;
    int tmp = num;
    for(int i = 0; i < 31; i++){
        if(num & 1){
            count = i;
        }
        num = num >> 1;
    }

    printf("Highest order set bit in %d is %d", tmp, count);
}