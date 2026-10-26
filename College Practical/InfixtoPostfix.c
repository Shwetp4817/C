#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push into stack
void push(char ch)
{
    stack[++top] = ch;
}

// Pop from stack
char pop()
{
    return stack[top--];
}

// Check priority of operator
int precedence(char ch)
{
    if (ch == '^')
        return 3;

    if (ch == '*' || ch == '/')
        return 2;

    if (ch == '+' || ch == '-')
        return 1;

    return 0;
}

int main()
{
    char infix[MAX], postfix[MAX];
    int i = 0, j = 0;
    char ch;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    while (infix[i] != '\0')
    {
        ch = infix[i];

        // 1. If operand, add directly to postfix
        if (isalnum(ch))
        {
            postfix[j++] = ch;
        }

        // 2. If '(' push into stack
        else if (ch == '(')
        {
            push(ch);
        }

        // 3. If ')' pop until '('
        else if (ch == ')')
        {
            while (stack[top] != '(')
            {
                postfix[j++] = pop();
            }

            pop();   // Remove '('
        }

        // 4. If operator
        else
        {
            while (top != -1 &&
                   precedence(stack[top]) >= precedence(ch))
            {
                postfix[j++] = pop();
            }

            push(ch);
        }

        i++;
    }

    // 5. Pop remaining operators
    while (top != -1)
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
