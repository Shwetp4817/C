#include <stdio.h>

#define MAX 10

int graph[MAX][MAX];
char city[MAX][20];
int n = 0;

// Add a city
void addCity() {
    printf("Enter city name: ");
    scanf("%s", city[n]);
    n++;
}

// Add edge between two cities
void addEdge() {
    int u, v;

    printf("Enter city numbers (0 to %d): ", n - 1);
    scanf("%d%d", &u, &v);

    graph[u][v] = 1;
    graph[v][u] = 1;   // Undirected graph

    printf("Edge added.\n");
}

// Delete edge
void deleteEdge() {
    int u, v;

    printf("Enter city numbers: ");
    scanf("%d%d", &u, &v);

    graph[u][v] = 0;
    graph[v][u] = 0;

    printf("Edge deleted.\n");
}

// Display graph
void display() {
    int i, j;

    printf("\nAdjacency Matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", graph[i][j]);
        printf("\n");
    }
}

int main() {
    int choice, i;

    printf("Enter number of cities: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter city %d name: ", i);
        scanf("%s", city[i]);
    }

    while (1) {
        printf("\n1. Add Edge");
        printf("\n2. Delete Edge");
        printf("\n3. Display Graph");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEdge();
                break;

            case 2:
                deleteEdge();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!");
        }
    }
} 
