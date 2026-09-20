#include <stdio.h>

int main(){
    char s[256];
    int count = 0;
    FILE * fp = fopen("data.txt", "r");
    while(fgets(s, 256, fp) != NULL){
        count ++;
    }
    printf("%d", count);
}