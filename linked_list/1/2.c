#include <stdio.h>

void sort(int * arr, int size){
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
        }
    }

}
int main() {
    int arr[] = {3,6,8,2,1,10,32,3};
    sort(arr, sizeof(arr)/ sizeof(arr[0]));
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d, ", arr[i]);
    }
}