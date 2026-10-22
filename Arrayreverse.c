#include<stdio.h>

void reverseArray (int arr[], int n) {

    int left = 0;
    int right = n -1;

    while (left < right) {

        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

int main () {

    int arr[] = {10, 20 , 30, 40, 50};

    int n = 5;

    reverseArray(arr, n);

    printf("Reversed array is: \n");

    for (int i = 0; i < n; i++) {

        printf("%d \n", arr[i]);
    }

    return 0;
}