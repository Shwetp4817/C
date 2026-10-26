#include <stdio.h>

#define MAX 5

char queue[MAX];

int front = -1;
int rear = -1;


// Check whether queue is empty
int isEmpty()
{
    return front == -1;
}


// Check whether queue is full
int isFull()
{
    return (front == (rear + 1) % MAX);
}


// Insert an element into circular queue
void enqueue(char ch)
{
    if (isFull())
    {
        printf("Queue Overflow! Queue is full.\n");
        return;
    }

    // First element
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        // Move rear circularly
        rear = (rear + 1) % MAX;
    }

    queue[rear] = ch;

    printf("%c inserted into queue.\n", ch);
}


// Delete an element from circular queue
void dequeue()
{
    char ch;

    if (isEmpty())
    {
        printf("Queue Underflow! Queue is empty.\n");
        return;
    }

    ch = queue[front];

    // If only one element is present
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        // Move front circularly
        front = (front + 1) % MAX;
    }

    printf("%c deleted from queue.\n", ch);
}


// Display queue elements
void display()
{
    int i;

    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");

    i = front;

    while (1)
    {
        printf("%c ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }

    printf("\n");
}


// Show front element
void peek()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Front element = %c\n", queue[front]);
    }
}


// Main function
int main()
{
    int choice;
    char ch;

    while (1)
    {
        printf("\n----- CIRCULAR QUEUE -----\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Check Empty\n");
        printf("6. Check Full\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter character: ");
                scanf(" %c", &ch);
                enqueue(ch);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                if (isEmpty())
                    printf("Queue is empty.\n");
                else
                    printf("Queue is not empty.\n");
                break;

            case 6:
                if (isFull())
                    printf("Queue is full.\n");
                else
                    printf("Queue is not full.\n");
                break;

            case 7:
                printf("Program ended.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
} 


/*
We will perform the standard operations:
1. Enqueue – insert a character
2. Dequeue – delete a character
3. Display – show all elements
4. Peek – show the front element
5. isEmpty – check whether queue is empty
6. isFull – check whether queue is full
*/
