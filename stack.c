/*Stack implementation using static array*/ 
#include<stdio.h>
#define CAPACITY 5 // pre -processor macro

int stack[CAPACITY], top = -1; // static array [-1 is used to indicate that the stack is empty]
void push(int);
void main(){

    int ch ;
    while(1){
    printf("1.Push \n");
    printf("2.Pop \n");
    printf("3.Peek \n");
    printf("4.Traverse \n");

    printf("5.Quit \n");

    printf("Enter your choice: ");

    scanf("%d", &ch);

    switch(ch){
        case 1:  printf("Enter element : ");
                 scanf("%d", &item);
                 push(item);
                 break;

        case 2: item = pop();
        if(item == 0)
        {
            printf("Stack is underflow \n");
        }
        else{
            printf("%d popped item : \n", item);
        }
                break;
        case 3: peek();
                break;
        case 4: traverse();
                break;
        case 5: exit(0);
                break;
        default: printf("Invalid choice \n");
    }
}
void push(int ele)
{

    if(isFull()){
     printf("Stack is full \n");

    }
    else{
       top++;
       stack[top] = ele;
       printf("%d pushed to stack \n", ele);
    }
}
isFull(){

    if(top == CAPACITY - 1){
        return -1;
    }
    else{
        return 0;
    }
}

 int pop()
{
    if(isEmpty(){
        return 0;
    })
    else
    {
        return stack[top--];
    }
}