// Bubble sort
#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort(int arr[], int n){
    int i, k;
    for(i=0; i<n-1; i++){
        for(k=0; k<n-i-1; k++){
            if(arr[k]>arr[k+1])
            {
                swap(&arr[k], &arr[k+1]);
            }
        }
    }
}
int main() {
int arr[10]= {12, 70, 25, 98, 74, 10, 23, 45, 56 ,85};
int n=sizeof(arr)/sizeof(arr[0]);
int i;
printf("Original Array: \n");
for(i=0; i<n; i++){
    printf("\t%d", arr[i]);
}
printf("\nSorted Array: \n");
bubble_sort(arr, n);
for(i=0; i<n; i++){
    printf("\t%d", arr[i]);
}
}
