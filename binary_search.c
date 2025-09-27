#include<stdio.h>
//Binary Search without using recursion
int binary_search(int arr[], int n,int key){
    int low=0, high=n-1, mid;
    while(low<=high){
        mid=(low+high)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            high=mid-1;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result, key;
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    result=binary_search(arr, n, key);
    if(result!=-1){
        printf("The element is found at index: %d and value: %d", result, arr[result]);
    }
    else{
        printf("Element not found \n");
    }
}
