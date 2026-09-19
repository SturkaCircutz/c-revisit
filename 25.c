#include <stdio.h>
#include <string.h>

int binary_search(int l, int r, int * arr, int res){
    while(l < r){
        printf("Searching between indices %d and %d\n", l, r);
    int mid = (l+r)/2;
    if(arr[mid] == res){
        printf("%d", mid);
        return mid;
    }
    else if(arr[mid] < res){
        l = mid+1;
    }
    else{
        r = mid -1;

    }
    }
    return -1;

}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int target = 40;
    binary_search(0, sizeof(arr)/sizeof(arr[0]) -1, arr, target );
    return 0;

}