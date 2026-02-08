#include<stdio.h>
#include<stdlib.h>
struct node{
    int data; 
    struct node *next;
};
struct node *head = NULL;
void insert_end(int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = val;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        struct node *temp=head;
        while(temp->next !=NULL){
            temp=temp->next;
        }
    temp->next = newnode;
    }
}
void display(struct node *head){
    struct node *temp;
    if(temp==NULL){
        printf("The list is empty");
    }
    else{
        temp = head;
        while(temp !=NULL){
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}
int main(){
    int n;
    printf("Enter the number of values to put: \n");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("Value: \n");
        int val;
        scanf("%d", &val);
        insert_end(val);
    }
    display(head);
}
