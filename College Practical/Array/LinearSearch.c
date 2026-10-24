#include<stdio.h>

int main() {

    int arr[] = {10, 25, 30, 40, 50};
    int n = 5;
    int value = 30; // Value to be searched

    int found = -1; // Flag to indicate if the value is found

    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("Element found at index %d\n", found);
    } else {
        printf("Element not found \n");
    }
}