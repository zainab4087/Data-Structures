#include<stdio.h>
#include<stdlib.h>

int binary_search(int arr[],int low, int high, int key){
    int mid=(low+high)/2;
    if(low>high) return -1;
    if(key==arr[mid]){
        return mid;
    }
    else if(key<arr[mid]){
        binary_search(arr,low, mid, key);
    }
    else if(key>arr[mid]){
        binary_search(arr, mid+1, high, key);
    }
}
int main(){
    int arr[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n=sizeof(arr)/sizeof(arr[0]);
    //int low=0, high=n-1;
    int result, key;
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    result= binary_search(arr, 0, n-1, key);
    if(result!=-1){
        printf("Key successfully found at index: %d and value: %d", result, arr[result]);
    }
    else{
        printf("Key not found");
    }
}
