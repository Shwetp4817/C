#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* insert(struct Node* root, int val) {
    if (!root) {
        struct Node* n = malloc(sizeof(struct Node));
        n->data = val; n->left = n->right = NULL;
        return n;
    }
    if (val < root->data) root->left = insert(root->left, val);
    else if (val > root->data) root->right = insert(root->right, val);
    return root;
}

void inorder(struct Node* r) {
    if (r) { inorder(r->left); printf("%d ", r->data); inorder(r->right); }
}

void preorder(struct Node* r) {
    if (r) { printf("%d ", r->data); preorder(r->left); preorder(r->right); }
}

void postorder(struct Node* r) {
    if (r) { postorder(r->left); postorder(r->right); printf("%d ", r->data); }
}

int main() {
    struct Node* root = NULL;
    int ch, val;
    while (1) {
        printf("\n1.Insert 2.Inorder 3.Preorder 4.Postorder 5.Exit\nChoice: ");
        scanf("%d", &ch);
        if (ch == 1) { printf("Val: "); scanf("%d", &val); root = insert(root, val); }
        else if (ch == 2) { inorder(root); printf("\n"); }
        else if (ch == 3) { preorder(root); printf("\n"); }
        else if (ch == 4) { postorder(root); printf("\n"); }
        else if (ch == 5) break;
    }
    return 0;
}