#include<stdio.h>

int main() {

    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};

    int n1 = 5;
    int n2 = 5;

    int c[n1 + n2];

    // Copy elements of array a to array c
    for (int i = 0; i < n1; i++){
        c[i] = a[i];
    }

    // Copy elements of array b to array c
    for (int i = 0; i < n2; i++){
        c[n1 + i] = b[i];
    }
    
    // Print the concatenated array
    for (int i = 0; i < n1 + n2; i++){
        printf("%d ", c[i]);
    }
    return 0;
}
