#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {
    int data;
    struct node *left, *right;
};
//creation of new node.
struct node *createNewNode( int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left=newNode->right=NULL;
    return newNode;
}
// insert left.
// insert right.
// isFull binary tree
bool isFullBinaryTree( struct node *root)   {
  if (root == NULL)
    return true;
  if (root->left == NULL && root->right == NULL)
    return true;

  if ((root->left) && (root->right))
    return (isFullBinaryTree(root->left) && isFullBinaryTree(root->right));

  return false;
    
}
// main function.
int main()  {
    struct node *root = NULL;
     root = createNewNode(1);
    root->left = createNewNode(2);
    root->right = createNewNode(3);

    root->left->left = createNewNode(4);
    root->left->right = createNewNode(5);
    root->left->right->left = createNewNode(6);
    root->left->right->right = createNewNode(7);

  if (isFullBinaryTree(root))
    printf("The tree is a full binary tree\n");
  else
    printf("The tree is not a full binary full\n");
}
