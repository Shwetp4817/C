//Doubly Linked List of Employee Data

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int id;
    char name[30], desig[30];
    float sal;
    char phone[15];
    struct Node *prev, *next;
};

struct Node *head = NULL;

// Insert employee
void insert() {
    struct Node *new = malloc(sizeof(struct Node));

    printf("Enter ID: ");
    scanf("%d", &new->id);
    printf("Enter Name: ");
    scanf("%s", new->name);
    printf("Enter Designation: ");
    scanf("%s", new->desig);
    printf("Enter Salary: ");
    scanf("%f", &new->sal);
    printf("Enter Phone: ");
    scanf("%s", new->phone);

    new->prev = NULL;
    new->next = head;

    if (head != NULL)
        head->prev = new;

    head = new;
}

// Display employees
void display() {
    struct Node *p = head;

    while (p != NULL) {
        printf("\nID: %d", p->id);
        printf("\nName: %s", p->name);
        printf("\nDesignation: %s", p->desig);
        printf("\nSalary: %.2f", p->sal);
        printf("\nPhone: %s\n", p->phone);
        p = p->next;
    }
}

// Search employee
void search() {
    int id;
    struct Node *p = head;

    printf("Enter ID to search: ");
    scanf("%d", &id);

    while (p != NULL) {
        if (p->id == id) {
            printf("Employee Found: %s\n", p->name);
            return;
        }
        p = p->next;
    }
    printf("Employee Not Found\n");
}

// Delete employee
void delete() {
    int id;
    struct Node *p = head;

    printf("Enter ID to delete: ");
    scanf("%d", &id);

    while (p != NULL && p->id != id)
        p = p->next;

    if (p == NULL) {
        printf("Employee Not Found\n");
        return;
    }

    if (p->prev != NULL)
        p->prev->next = p->next;
    else
        head = p->next;

    if (p->next != NULL)
        p->next->prev = p->prev;

    free(p);
    printf("Employee Deleted\n");
}

int main() {
    int ch;

    do {
        printf("\n\n1.Insert  2.Display  3.Search  4.Delete  5.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: insert(); break;
            case 2: display(); break;
            case 3: search(); break;
            case 4: delete(); break;
            case 5: exit(0);
            default: printf("Invalid Choice");
        }
    } while(1);

    return 0;
}

