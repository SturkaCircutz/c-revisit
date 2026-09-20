#include <stdio.h>

int main(){
    FILE * fp = fopen("source.txt", "r");
    FILE * dest = fopen("destination", "w");
    char ch;
    while((ch = fgetc(fp)) != EOF){
        fputc(ch, dest);
    }
    fclose(fp);
    fclose(dest);
    return 0;
}