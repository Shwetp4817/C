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

void pop()
{
    // Check whether stack is empty
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("%d popped from stack\n", stack[top]);

    // Decrease top
    top--;
}

int main()
{
    push(10);
    push(20);
    push(30);

    pop();
    pop();

    return 0;
} 
