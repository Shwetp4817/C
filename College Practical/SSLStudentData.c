#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll, sem;
    char name[30], branch[20], phone[15];
    struct Student *next;
};

struct Student *head = NULL;

// Create node
struct Student* create()
{
    struct Student *p = malloc(sizeof(struct Student));

    printf("Roll: "); scanf("%d",&p->roll);
    printf("Name: "); scanf(" %[^\n]",p->name);
    printf("Branch: "); scanf(" %[^\n]",p->branch);
    printf("Semester: "); scanf("%d",&p->sem);
    printf("Phone: "); scanf("%s",p->phone);

    p->next = NULL;
    return p;
}

// 1. Insert Beginning
void insertBeg()
{
    struct Student *p = create();
    p->next = head;
    head = p;
}

// 2. Insert End
void insertEnd()
{
    struct Student *p = create(), *t = head;

    if(head == NULL) {
        head = p;
        return;
    }

    while(t->next != NULL)
        t = t->next;

    t->next = p;
}

// 3. Display
void display()
{
    struct Student *t = head;

    while(t != NULL) {
        printf("\n%d %s %s %d %s",
               t->roll,t->name,t->branch,t->sem,t->phone);
        t = t->next;
    }
}

// 4. Delete Beginning
void deleteBeg()
{
    struct Student *t;

    if(head == NULL) return;

    t = head;
    head = head->next;
    free(t);
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n\n1.Insert Beginning");
        printf("\n2.Insert End");
        printf("\n3.Display");
        printf("\n4.Delete Beginning");
        printf("\n7.Exit");
        printf("\nChoice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: insertBeg(); break;
            case 2: insertEnd(); break;
            case 3: display(); break;
            case 4: deleteBeg(); break;
            case 7: exit(0);
            default: printf("Invalid choice");
        }
    }
}
