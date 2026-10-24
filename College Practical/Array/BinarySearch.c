#include <stdio.h>

int main () {

    int arr[] = {10,20,30,40,50,60};

    int n = 6;
    int value = 30; // Value to be searched

    int left = 0;
    int right = n - 1;

    while (left < right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] == value) {
            printf("Found at index %d\n", mid);
            return 0;
        }
        else if (arr[mid] < value) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    printf("Not found\n");

    return 0;
}


