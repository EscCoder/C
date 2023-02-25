// Write a program in C to find Preorder & Postorder Traversals in
//binary tree

#include <stdio.h>
#include <stdlib.h>

// By definition of a binary tree we have left and right of the node
struct TreeNode 
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
typedef struct TreeNode vrtx;

// Function to create a new node with a given value
vrtx *newNode(int val) 
{
    
    vrtx *node = (vrtx*) malloc(sizeof(vrtx));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to perform Preorder Traversal of a binary tree
void preorderTraversal(vrtx *node) 
{
    if (node == NULL) 
        return;
    //preorder traversal is root->left->right
    printf("%d ", node->val);
    //print value of root before travelling to left node
    preorderTraversal(node->left);
    //after travelling all left nodes we travel right node
    preorderTraversal(node->right);
}

// Function to perform Postorder Traversal of a binary tree
void postorderTraversal(vrtx *node) 
{
    if (node == NULL) 
        return;
        
    //post order traversal left->right->root 
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    printf("%d ", node->val);
}

int main() {
    // Create a sample binary tree
    vrtx *root = newNode(11);
    root->left = newNode(12);
    root->right = newNode(13);
    root->left->left = newNode(14);
    root->left->right = newNode(15);
    root->right->left = newNode(16);
    root->right->right = newNode(17);
    
    printf("Assignment 1__ Program to find Preorder and Postorder Traversal of a Binary tree:\nThere are total 7 vertex where 11 is the root node:\n\n");

    // Perform Preorder Traversal of the binary tree
    printf("Preorder Traversal is: ");
    preorderTraversal(root);
    printf("\n");

    // Perform Postorder Traversal of the binary tree
    printf("Postorder Traversal is: ");
    postorderTraversal(root);
    printf("\n");

    return 0;
}
