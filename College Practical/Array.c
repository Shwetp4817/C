#include <stdio.h>

void create(int a[], int *n) {
    printf("Enter size: ");
    scanf("%d", n);

    printf("Enter elements: ");
    for (int i = 0; i < *n; i++)
        scanf("%d", &a[i]);
}

void display(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void insert(int a[], int *n) {
    int pos, x;
    printf("Enter position and value: ");
    scanf("%d%d", &pos, &x);

    for (int i = *n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = x;
    (*n)++;
}

void delete(int a[], int *n) {
    int pos;
    printf("Enter position: ");
    scanf("%d", &pos);

    for (int i = pos; i < *n - 1; i++)
        a[i] = a[i + 1];

    (*n)--;
}

void search(int a[], int n) {
    int x;
    printf("Enter value: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
        if (a[i] == x) {
            printf("Found at index %d\n", i);
            return;
        }

    printf("Not found\n");
}

void reverse(int a[], int n) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
}

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
}

int main() {
    int a[100], n, choice;

    create(a, &n);

    do {
        printf("\n1.Display  2.Insert  3.Delete  4.Search");
        printf("\n5.Reverse  6.Sort  7.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: display(a, n); break;
            case 2: insert(a, &n); break;
            case 3: delete(a, &n); break;
            case 4: search(a, n); break;
            case 5: reverse(a, n); break;
            case 6: sort(a, n); break;
        }
    } while (choice != 7);

    return 0;
}