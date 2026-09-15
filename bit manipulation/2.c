// get nth bit
#include <stdio.h>

int main(){
    int num, n;
    printf("Input number: \n");
    scanf("%d", &num);
    printf("Input nth bit number: \n");
    scanf("%d", &n);
    int res = num &(1 << n);
    res = res >> n;
    printf("the %d bit of %d is set(%d)", n, num, res);

}