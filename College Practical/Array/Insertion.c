#include<stdio.h>


int main () {

    int arr[10] = {10,20,30,40,50};

    int n = 5;
    int index = 2;
    int value  = 25;

    // Shift elements to the right to make space for the new element
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified index
    arr[index] = value;
    n++; // Increment the size of the array

    // Now print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d \n", arr[i]);
    }

    return 0;
}
