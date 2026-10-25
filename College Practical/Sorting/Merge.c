//Merge Sort uses Divide and Conquer.
//Divide the array into smaller parts.
//Then merge them in sorted order.  

// [THIS IS LITTLE BIT COMPLEX THAN OTHER'S]

#include <stdio.h>

// Merge two sorted portions of the array
void merge(int arr[], int left, int mid, int right)
{
    // Calculate size of left subarray
    int n1 = mid - left + 1;

    // Calculate size of right subarray
    int n2 = right - mid;

    // Temporary arrays
    int L[n1];
    int R[n2];

    // Copy left part into L
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }

    // Copy right part into R
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    // i tracks L
    int i = 0;

    // j tracks R
    int j = 0;

    // k tracks original array
    int k = left;

    // Compare elements from both arrays
    while (i < n1 && j < n2)
    {
        // Put smaller element into original array
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }

        // Move to next position
        k++;
    }

    // Copy remaining elements of L
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    // Continue only when at least two elements exist
    if (left < right)
    {
        // Find middle position
        int mid = left + (right - left) / 2;

        // Sort left half
        mergeSort(arr, left, mid);

        // Sort right half
        mergeSort(arr, mid + 1, right);

        // Merge both sorted halves
        merge(arr, left, mid, right);
    }
}

int main()
{
    int arr[] = {7, 2, 9, 1, 4};

    int n = 5;

    // Sort entire array
    mergeSort(arr, 0, n - 1);

    // Print sorted array
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
