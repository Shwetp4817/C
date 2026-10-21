/*How to traverse a linked list*/

#include<stdbool.h>
#include <stdio.h>
#include <stddef.h>

struct Node {
    int data;
    struct Node* next;
};

int main(){

    struct Node n1, n2, n3;

    n1.data = 1;
    n2.data = 2;
    n3.data = 3;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    //Traversal of the linked list
    struct Node* current = &n1;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    return 0;
}