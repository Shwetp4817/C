#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *newnode, *temp;
    int choice, data;

    // Create header node
    head = (struct Node*)malloc(sizeof(struct Node));

    // Header initially points to itself
    head->next = head;

    while (1) {
        printf("\n1.Insert  2.Delete  3.Display  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        // INSERT
        if (choice == 1) {
            printf("Enter data: ");
            scanf("%d", &data);

            // Create new node
            newnode = (struct Node*)malloc(sizeof(struct Node));
            newnode->data = data;

            // Find last node
            temp = head;
            while (temp->next != head)
                temp = temp->next;

            // New node points to header
            newnode->next = head;

            // Last node points to new node
            temp->next = newnode;
        }

        // DELETE
        else if (choice == 2) {
            // Check empty list
            if (head->next == head) {
                printf("List is empty\n");
                continue;
            }

            // Start from first node
            temp = head;

            // Find last node
            while (temp->next->next != head)
                temp = temp->next;

            // Delete last node
            free(temp->next);

            // Last node points to header
            temp->next = head;

            printf("Deleted\n");
        }

        // DISPLAY
        else if (choice == 3) {
            // Start from first node
            temp = head->next;

            // Traverse until header
            while (temp != head) {
                printf("%d -> ", temp->data);
                temp = temp->next;
            }

            printf("HEAD\n");
        }

        // EXIT
        else if (choice == 4) {
            break;
        }

        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
