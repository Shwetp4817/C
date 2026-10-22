// Array must be sorted in ascending order for binary search to work correctly.

//arr = {2, 3, 4, 10, 40};

#include <stdio.h>

int binarySearch(int arr[], int n, int key) { // the key is the element to be searched in the array 


    int left = 0;
    int right = n -1;

    while (left <= right) {

        int mid = left + (right - left) / 2; // To avoid potential overflow

        if (arr[mid] == key) {
            return mid; // Key found at index mid
        }
        else if (arr[mid] < key) {
            left = mid + 1; // Search in the right half
        }
        else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Key not found
}

int main() {
    
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int key = 80;

    int result = binarySearch(arr, n, key);

    printf("Element found at index: %d\n", result);

    return 0;
}