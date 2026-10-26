#include <stdio.h>

#define MAX 3

char q[MAX];
int front = -1, rear = -1;

void insert() {
    if ((rear + 1) % MAX == front) {
        printf("Queue Full!\n");
        return;
    }
    if (front == -1) front = 0;
    rear = (rear + 1) % MAX;
    
    printf("Enter char: ");
    scanf(" %c", &q[rear]);
}

void delete() {
    if (front == -1) {
        printf("Queue Empty!\n");
        return;
    }
    printf("Deleted: %c\n", q[front]);
    
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1) {
        printf("Queue Empty!\n");
        return;
    }
    int i = front;
    printf("Queue: ");
    while (1) {
        printf("%c ", q[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    int ch;
    while (1) {
        printf("\n1.Insert 2.Delete 3.Display 4.Exit\nChoice: ");
        scanf("%d", &ch);

        if (ch == 1) insert();
        else if (ch == 2) delete();
        else if (ch == 3) display();
        else if (ch == 4) break;
    }
    return 0;
}