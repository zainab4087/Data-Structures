/*linear search algorithm
Step 1: compare the first element
step 2: compare the target with each element present in the array
step 3: return the index of the target if found and if it isn't present in the array, return -1
*/
#include<stdio.h>
#include<stdlib.h>
int linear(int a[],int n, int ele){
    int i;
    for(i=0; i<n; i++){
        if(a[i]==ele){
            return i;       }
    }return -1;
}
int main(){
    int n, i, ele;
    printf("Enter the size of array(1-10): ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &ele);
    int val;
    val=linear(a, n, ele);
    if(val!=-1){
        printf("The target found at index %d value: %d", val, a[val]);
    }
    else{
        printf("Target not found\n");
    }
}
