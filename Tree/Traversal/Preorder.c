#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* CreateNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void preorder(struct Node* root){
    if(root == NULL) return;

    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

int main(){
    struct Node* root = CreateNode(100);

    root->left = CreateNode(90);
    root->right = CreateNode(80);
    root->left->left = CreateNode(70);
    root->left->right = CreateNode(60);
    root->right->left = CreateNode(50);
    root->right->right = CreateNode(40);

    preorder(root);

    return 0;
}