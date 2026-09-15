#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[50];
    int roll;
    float GPA;
} Student;

int main(){
    Student class[3] ={
        {"Alice", 101, 3.8},
        {"Bob", 102, 3.9},
        {"Charlie", 103, 3.5}
    };
    int best = 0;
    for(int i = 0; i < 3; i++){
        printf("%s (GPA %.1f)\n", class[i].name, class[i].GPA);
        if(class[i].GPA > class[best].GPA){
            best = i;
        }
    }
    printf(" top student: %s with gpa %.1f", class[best].name, class[best].GPA);
}