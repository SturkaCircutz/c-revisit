#include <stdio.h>
struct Student{
    char name[20];
    int age;
};

int main(){
    struct Student out[2] = {
        {"jiawen", 15},
        {"liu", 12},
    }, in[2];
    FILE * fp = fopen("student.bin", "wb");
    fwrite(out, sizeof(struct Student), 2, fp);
    fclose(fp);
    fp = fopen("student.bin", "rb");
    fread(in, sizeof(struct Student), 2, fp);
    for(int i = 0; i < 2; i++){
        printf("%s, %d\n", in[i].name, in[i].age);
    }
    fclose(fp);
    return 0;
}