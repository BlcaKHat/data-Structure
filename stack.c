#include<stdio.h>

#include<stdlib.h>

#define MAX 10

int count =0;
// creating a Stack//
struct stack
{
    int items[MAX];
    int top;
};

typedef struct stack st;

void createEmptyStack( st *s)   {
    s->top = -1;
}

int isFull(st *s)   {
    if(s->top == MAX-1) {
        return 1;
    }
    else
    {
        return 0;
    }   
}

int isEmpty( st *s) {
    if(s->top == -1)    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(st *s, int newItem)   {
    if(isFull(s))   {
        printf("the stack is full");
    }
    else
    {
        s->top++;
        s->items[s->top] = newItem;
    }
    count++; 
}

void pop(st *s)     {
    if(isEmpty(s))
    {
        printf("stack is empty");
    }
    else
    {
        printf("poped item %d",s->items[s->top]);
        //s->items[s->top] = NULL;
        s->top--;
    }
    count--;
}

void printStack(st *s)  {

    for (int i = 0; i < count; i++)
    {
        printf("%d\n",s->items[i]);
    }
    
}

int main()  {
    int ch;
    st *s = (st *)malloc(sizeof(st));
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);

    pop(s);

    printf("\nAfter popping out\n");
    printStack(s);
}

