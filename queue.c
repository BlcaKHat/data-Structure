#include<stdlib.h>
#include<stdio.h>

#define SIZE 5

void enQueue();
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main()  {
    //deQueue is not possible on empty queue
  deQueue();

  //enQueue 5 elements
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);

  //6th element can't be added to queue because queue is full
  enQueue(6);

  display();

  //deQueue removes element entered first i.e. 1
  deQueue();

  //Now we have just 4 elements
  display();

  return 0;
}

void enQueue(int value) {
    //check if queue id full.
    if(rear == SIZE-1)  {
        printf("the queue is full\n");
        //exit(0);
    }
    else
    {
        if (front == -1)
        {
            front++;
            rear++;
            items[rear] = value;
        }
        else
        {
            rear++;
            items[rear] = value;
        }
     printf("\n inserted value %d \n",items[rear]);   
    }
}

void deQueue()  {
    if(front == -1) {
        printf(" the queue is empty");
    }
    else
    {
        printf("\n removed %d item from queue.", items[front]);
        items[front] = 0;
        front++;
        if(front > rear)
            front=rear = -1;
    }
    
}

void display()  {
    if (rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (int i = front; i < rear; i++)
        {
            printf("\n %d Queue \n", items[i]);            
        }
        
    }
    
    
}