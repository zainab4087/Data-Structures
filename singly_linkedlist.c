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
void delete(int val){
    struct node *temp = head, *prev = NULL;
    if(head == NULL){
        printf("empty");
        return;
    }
    if(head->data==val){
        head = head->next;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data!=val){
        prev=temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
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
    int val;
    printf("Enter the number of values to put: \n");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("Value: \n");
        
        scanf("%d", &val);
        insert_end(val);
    }
    display(head);
    printf("\nEnter the node to be deleted: \n");
    scanf("%d", &val);
    delete(val);
    printf("Modified list: \n");
    display(head);
}
