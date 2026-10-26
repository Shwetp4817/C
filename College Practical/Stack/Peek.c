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

void peek()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Top element = %d\n", stack[top]);
}

int main()
{
    push(10);
    push(20);
    push(30);

    peek();

    return 0;
} 
