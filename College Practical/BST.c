#include <stdio.h>
#include <stdlib.h>

// Create a new node
struct Node {
    int data;
    struct Node *left, *right;
};

// Create node
struct Node* create(int x) {
    struct Node* n = malloc(sizeof(struct Node));

    n->data = x;
    n->left = NULL;
    n->right = NULL;

    return n;
}

// 1. INSERT
struct Node* insert(struct Node* root, int x) {

    if (root == NULL)
        return create(x);

    if (x < root->data)
        root->left = insert(root->left, x);

    else if (x > root->data)
        root->right = insert(root->right, x);

    return root;
}

// 2. SEARCH
int search(struct Node* root, int x) {

    if (root == NULL)
        return 0;

    if (root->data == x)
        return 1;

    if (x < root->data)
        return search(root->left, x);

    return search(root->right, x);
}

// 3. INORDER
void inorder(struct Node* root) {

    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// 4. PREORDER
void preorder(struct Node* root) {

    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// 5. POSTORDER
void postorder(struct Node* root) {

    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// Find smallest node
struct Node* minNode(struct Node* root) {

    while (root->left != NULL)
        root = root->left;

    return root;
}

// 6. DELETE
struct Node* deleteNode(struct Node* root, int x) {

    if (root == NULL)
        return NULL;

    if (x < root->data)
        root->left = deleteNode(root->left, x);

    else if (x > root->data)
        root->right = deleteNode(root->right, x);

    else {

        // No left child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }

        // No right child
        if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Two children
        struct Node* temp = minNode(root->right);

        root->data = temp->data;

        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

// MAIN
int main() {

    struct Node* root = NULL;
    int x;

    // Insert
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    // Search
    x = 40;

    if (search(root, x))
        printf("40 Found\n");
    else
        printf("40 Not Found\n");

    // Inorder
    printf("Inorder: ");
    inorder(root);

    // Preorder
    printf("\nPreorder: ");
    preorder(root);

    // Postorder
    printf("\nPostorder: ");
    postorder(root);

    // Delete
    root = deleteNode(root, 30);

    printf("\nAfter deleting 30: ");
    inorder(root);

    return 0;
} 
