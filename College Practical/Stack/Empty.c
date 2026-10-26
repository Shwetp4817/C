#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int isEmpty()
{
    if (top == -1)
        return 1;

    return 0;
}

int main()
{
    if (isEmpty())
        printf("Stack is Empty\n");
    else
        printf("Stack is not Empty\n");

    return 0;
} 
