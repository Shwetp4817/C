#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value)
{
    // Check whether stack is full
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    // Increase top
    top++;

    // Insert value
    stack[top] = value;

    printf("%d pushed into stack\n", value);
}

int main()
{
    push(10);
    push(20);
    push(30);

    return 0;
} 
