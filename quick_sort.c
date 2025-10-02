#include<stdio.h>
void swap( int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i=low-1; //tracking the smallest index element
    int j;
    for(j=low; j<high; j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[j], &arr[i]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return(i+1); // returning the new index of pivot 
    //we got the exact partition now
}
int quicksort(int arr[], int low, int high){
    if (low<high){
    int p=partition(arr, low, high);
    quicksort(arr, low, p-1);
    quicksort(arr, p+1, high);
}
}
void printarr(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("\t%d", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[6]={10,30,50,80,90,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Original Array: \n");
    printarr(arr, n);
    // sorting
    quicksort(arr, 0, n-1);
    printf("\nSorted Array: \n");
    printarr(arr, n);
}
