//Quick Sort also uses Divide and Conquer.
//Choose one element as a pivot.
//Put smaller elements on left and larger elements on right:
//Then recursively sort both sides.

#include <stdio.h>

void swap(int *a, int *b)
{
    // Store first value temporarily
    int temp = *a;

    // Put second value into first
    *a = *b;

    // Put original first value into second
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    // Choose last element as pivot
    int pivot = arr[high];

    // Index of smaller element
    int i = low - 1;

    // Check every element before pivot
    for (int j = low; j < high; j++)
    {
        // If current element is smaller than pivot
        if (arr[j] < pivot)
        {
            // Move smaller-element index
            i++;

            // Put smaller element on left side
            swap(&arr[i], &arr[j]);
        }
    }

    // Put pivot in its correct position
    swap(&arr[i + 1], &arr[high]);

    // Return pivot's final position
    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    // Continue if more than one element exists
    if (low < high)
    {
        // Partition the array
        int pi = partition(arr, low, high);

        // Sort elements before pivot
        quickSort(arr, low, pi - 1);

        // Sort elements after pivot
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {5, 3, 9, 2, 4};

    int n = 5;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
