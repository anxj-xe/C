#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* insertbegin(struct Node* ptr,int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = ptr;

    ptr = newNode;

    return ptr;
};

void traversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

int main(){

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* scnd = (struct Node*)malloc(sizeof(struct Node));

    head->data = 20;
    head->next = scnd;

    scnd->data = 30;
    scnd->next = NULL;

    head = insertbegin(head,10);

    head = insertbegin(head,5);

    traversal(head);

    return 0;
}