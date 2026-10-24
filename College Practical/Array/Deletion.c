#include<stdio.h>

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int n = 5;
    int index = 2; // Index of the element to be deleted

    //shift elements to the left side 
    for (int i = index; i < n; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease the size of the array

    // now print the array after the deletion
    for (int i = 0; i < n; i++) {
        printf("%d \n", arr[i]);
    }


    return 0;
}