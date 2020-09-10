#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left, *right;
    int height;
};
int max(int a, int b){
    return(a>b?a:b);
}
int height(struct node *root){
    if(root == NULL)
        return 0;
    return root->height;
}
//balance
int getBalance(struct node *root)    {
    if(root == NULL)
        return 0;
    return (height(root->left)- height(root->right));
}
// left rotate.
struct node *leftRotate(struct node * root) {
    struct node *a = root->right;
    struct node *y = a->left;

    a->left = root;
    a->right = y;

    a->height = 1+ max(height(a->left), height(a->right));
    y->height = 1+ max(height(a->left), height(a->right));

    return a;

}
// right rotate.
struct node *rightRotate(struct node * root) {
    struct node *a = root->left;
    struct node *y = a->right;

    a->right = root;
    a->left = y;

    a->height = 1+ max(height(a->left), height(a->right));
    y->height = 1+ max(height(a->left), height(a->right));

    return a;

}
//preorder traversal.

void preOrder(struct node *root)        {
    if(root == NULL)
        return;
    printf("%d - >", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

//create new node.
struct node *createNewNode(int value) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data=value;
    newNode->height=1;

    return newNode;
}
// insert.
struct node *insert(struct node *root, int value)   {
    if(root == NULL)
        return createNewNode(value);

    if(value < root->data)
        root->left = insert(root->left,value);
    else if(value > root->data)
        root->right = insert(root->right, value);
    else
        return root;
    root->height =  1 + max(height(root->left), height(root->left));
    int balance = getBalance(root);
    
    //left - left.
    if(balance> 1 && value <root->left->data)   {
        return rightRotate(root);
    }
    if(balance > 1 && value >root->left->data)    {
        root->left= leftRotate(root->left);
        return rightRotate(root);
    }
    //right - right
    if(balance < -1 && value > root->right->data)   {
        return leftRotate(root);
        //root->right = rightRotate(root->right);
    }
    // right - left.
    if(balance < -1 && value <root->right->data)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}

int main()  {
    struct node *root = NULL;

    root=insert(root, 10);
    root=insert(root, 20);
    root=insert(root, 30);
    root=insert(root, 40);
    printf("PReorder traversal :\n");

    preOrder(root);

}