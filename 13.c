#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float first;
    float second;
} complex;

complex add(complex n1, complex n2){
    complex new;
    new.first = n1.first + n2.first;
    new.second = n1.second + n2.second;
    return new;
}
int main(){
    complex class[2] = {
        {3.0, 4.0},
        {1.0, 2.0}
    };
    complex new = add(class[0], class[1]);
    printf("the added complex is %f + %fi", new.first, new.second);
}