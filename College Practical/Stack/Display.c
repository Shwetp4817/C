//Display print all the elements from stack
// Stack ko TOP se DOWN print karte hai 

#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    top++;
    stack[top] = value;
}

void display()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Stack elements:\n");

    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    display();

    return 0;
} 
