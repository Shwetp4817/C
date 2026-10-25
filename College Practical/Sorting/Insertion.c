//Think of sorting playing cards.

#include <stdio.h>

void insertionSort(int arr[], int n)
{
    // Start from index 1 because a single element
    // at index 0 is already considered sorted
    for (int i = 1; i < n; i++)
    {
        // Store the current element
        int key = arr[i];

        // Start comparing with the previous element
        int j = i - 1;

        // Move larger elements one position to the right
        while (j >= 0 && arr[j] > key)
        {
            // Shift element to the right
            arr[j + 1] = arr[j];

            // Move towards the beginning
            j--;
        }

        // Insert key at its correct position
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {5, 9, 6, 1, 3};

    int n = 5;

    insertionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
