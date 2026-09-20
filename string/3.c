#include <stdio.h>
#include <string.h>

int main(){
    int diff = 'a'-'A';
    char str[] = "C PrOgRaMmInG Is AwEsOmE";
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += diff;
        }
    }
    printf("%s", str);

}