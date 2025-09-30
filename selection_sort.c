#include<stdio.h>
//Selection sort
void swap(int *a, int *b){
    int temp=*a;
    *a = *b;
    *b = temp;
}
void selection_sort(int a[], int n){
    int i, j;
    for(i=0; i<n-1; i++){
        int min=i;
        for(j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        swap(&a[i], &a[min]);
    }
}
int main(){
    int arr[5]={10, 40, 80, 100, 50};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Original Array:\n");
    int i;
    for(i=0; i<n; i++){
        printf("\t%d", arr[i]);
    }
    printf("\nSorted Array:\n");
    selection_sort(arr, n);
    for(i=0; i<n; i++){
        printf("\t%d", arr[i]);
    }
}
