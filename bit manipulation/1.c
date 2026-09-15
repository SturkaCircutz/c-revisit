// check LSB of a number is set or not
#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if(num & 1){
        print("lsb of ... is 1");
    }

}