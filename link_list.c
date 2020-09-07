#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int main()  {
    struct node *head;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    first = malloc(sizeof(struct node));
    second  = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    first->data=1;
    first->next = second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;

    head=first;
    
}