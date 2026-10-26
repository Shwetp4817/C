#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push operation
void push(int value)
{
    stack[++top] = value;
}

// Pop operation
int pop()
{
    return stack[top--];
}

// Perform operation
int calculate(int a, int b, char op)
{
    switch(op)
    {
        case '+':
            return a + b;

        case '-':
            return a - b;

        case '*':
            return a * b;

        case '/':
            return a / b;

        case '%':
            return a % b;

        case '^':
            return (int)pow(a, b);

        default:
            return 0;
    }
}

int main()
{
    char exp[MAX];
    int i;
    int a, b, result;

    printf("Enter suffix expression: ");
    scanf("%s", exp);

    for(i = 0; exp[i] != '\0'; i++)
    {
        // If character is a digit
        if(isdigit(exp[i]))
        {
            push(exp[i] - '0');
        }
        else
        {
            // Pop second operand first
            b = pop();

            // Pop first operand
            a = pop();

            // Calculate and push result
            result = calculate(a, b, exp[i]);

            push(result);
        }
    }

    printf("Result = %d\n", pop());

    return 0;
} 
