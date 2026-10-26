#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int isFull()
{
    if (top == MAX - 1)
        return 1;

    return 0;
}

int main()
{
    if (isFull())
        printf("Stack is Full\n");
    else
        printf("Stack is not Full\n");

    return 0;
} 
