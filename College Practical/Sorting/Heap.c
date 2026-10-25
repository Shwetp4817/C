//Heap Sort uses a Binary Heap.
//Largest element is at the root.
//We repeatedly move the root to the end. 

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Maintain max heap property
void heapify(int arr[], int n, int i)
{
    // Assume current node is largest
    int largest = i;

    // Calculate left child index
    int left = 2 * i + 1;

    // Calculate right child index
    int right = 2 * i + 2;

    // Check if left child is larger
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }

    // Check if right child is larger
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    // If largest is not the current node
    if (largest != i)
    {
        // Swap current node with largest child
        swap(&arr[i], &arr[largest]);

        // Fix the affected subtree
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    // Extract elements one by one
    for (int i = n - 1; i > 0; i--)
    {
        // Move largest element to end
        swap(&arr[0], &arr[i]);

        // Restore heap property
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {6, 1, 7, 5, 3};

    int n = 5;

    heapSort(arr, n);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
