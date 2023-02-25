#include <stdio.h>
#include <stdlib.h>

// Definition of a binary search tree node
struct Node 
{
    int val;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node with a given value
struct Node* newNode(int val) 
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}



// Function to insert a new node with a given value into a binary search tree
struct Node *insert(struct Node* root, int val) 
{
    if (root == NULL) 
        return newNode(val);
    if (val < root->val)
        root->left = insert(root->left, val);
    else if (val > root->val)
        root->right = insert(root->right, val);
    return root;
}

// Inorder traversal 
void inorderTraversal(struct Node* node) 
{
    if (node == NULL) 
        return;
    inorderTraversal(node->left);
    printf("%d ", node->val);
    inorderTraversal(node->right);
}

// Preorder traversal 
void preorderTraversal(struct Node* node) 
{
    if (node == NULL) 
        return;
    printf("%d ", node->val);
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

// Function to perform postorder traversal of a binary search tree
void postorderTraversal(struct Node* node) 
{
    if (node == NULL) 
        return;
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    printf("%d ", node->val);
}

int main() {
    // Create an empty binary search tree
    struct Node* root = NULL;

    
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("Assignment 2:Display various operations on Binary Search Tree\n\n");
    // Display the inorder, preorder, and postorder traversals of the binary search tree
    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n");

    printf("Preorder Traversal: ");
    preorderTraversal(root);
    printf("\n");

    printf("Postorder Traversal: ");
    postorderTraversal(root);
    printf("\n");

    return 0;
}
