#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *prev;
    struct node *next;
};

void printLinList(struct node *head)
{
    while( head->next != NULL)  {
        printf("%d\n",head->data);
        head=head->next;

    }
}

void AddAtBeginning ( struct node *head, int data)  {
    struct node *newNode = malloc(sizeof(struct node));
    head->next=newNode->next;
    newNode->prev=head;
    newNode->data=data;
}

void AddAtEnd(struct node *lastNode, int data)  {
    struct node *newNode = malloc(sizeof(struct node));
    lastNode->next = newNode;
    newNode->prev= lastNode;
    newNode->data=data;

}
void AddAtPosition(struct node *prevNode, struct node *nextNode, int data)  {
    struct node *newNode = malloc(sizeof(struct node));
    prevNode->next=newNode;
    newNode->next=nextNode;
    nextNode->prev=newNode;
    newNode->data=data;
}
void modify(struct node *currentNode, int data)  {
    currentNode->data=data;
}
void DeleteAtBeginning( struct node *head, struct node *currentNode)    {
    head->next=currentNode->next;
    //return head;
}

int main()
{
    struct Node* head = NULL;
    AddAtBeginning(head, 5);
    AddAtBeginning(head, 6);
    printLinList(head);
}