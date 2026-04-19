#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* insertat(struct Node* head,struct Node* prev,int value){
    if(prev == NULL){
        printf("Previous can't be NULL\n");
        return head;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = prev->next;
    prev->next = newNode;

    return head;
};

void trav(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* scnd = (struct Node*)malloc(sizeof(struct Node));
    struct Node* thrd = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = scnd;

    scnd->data = 20;
    scnd->next = thrd;

    thrd->data = 30;
    thrd->next = NULL;

    head = insertat(head,scnd,25);

    trav(head);

    return 0;
}