#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* NodeCreate(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
};

void inorder(struct Node* root){
    if(root == NULL) return;

    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

int main(){

    struct Node* root = NodeCreate(100);

    root->left = NodeCreate(90);
    root->right = NodeCreate(80);
    root->left->left = NodeCreate(70);
    root->left->right = NodeCreate(60);
    root->right->left = NodeCreate(50);
    root->right->right = NodeCreate(40);

    inorder(root);

    return 0;
}