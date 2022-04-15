/******************************************************************************

created by @AhmetKara
GitHub: https://github.com/ahmetQara

*******************************************************************************/

#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1; // front is the head of the tail, rear is the end of the tail.

void enQueue (int data)
{
    if(rear == SIZE)
    {
        printf("\nQueue is FULL!!! ");
        printf("\n");
    }
    else // if Queue is not full...
    {
        if(front == -1) // if the item(data) is added for the first time
            front = 0; // we fix this part (as element is added for the first time)
        rear = rear + 1; // rear increases by +1
        queue[rear] = data; // adding the data to the back of the queue
    }
}

void deQueue()
{
    if(front == -1 || front>rear)
    {
        printf("\nQueue is EMPTY!!!");
        printf("\n");
        /* Since it has entered this if condition, the queue is empty, 
        so we set these two values (front, rear) to default (-1) 
        so that they are ready for the next addition or subtraction. */
        front=-1; 
        rear=-1; 
    }
    else 
    {
        front = front + 1; // the frontmost item is out of the queue (deQueue)
    }
}

void display()
{
    int i;
    for (int i = front; i <= rear; i++) 
    {
        printf("%d ", queue[i]);
    }
}

int main()
{
    int userInput;
    while(1==1)
    {
        printf("\n1- enQueue");
        printf("\n2- deQueue");
        printf("\nEnter your choice: ");
        scanf("%d", &userInput);
        
        switch(userInput)
        {
            case 1:
                printf("\nEnter the data(integer) to be added to the queue: ");
                scanf("%d", &userInput);
                enQueue(userInput);
                display();
                break;
            case 2:
                deQueue();
                display();
                break;
        }

    }
 
    return 0;
}
