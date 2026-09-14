#include <stdio.h>
#include <stdlib.h>

int  my_strlen(char *s){
    int count = 0;
    while(*s != '\0'){
        s ++;
        count ++;
    }
    return count;
}
int main(){
    char * str = "Hello World";
    printf("%d", my_strlen(str));
}