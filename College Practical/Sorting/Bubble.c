//Compare adjacent elements and swap them if they are in the wrong order.


#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    // Outer loop controls the number of passes
    for (int i = 0; i < n - 1; i++)
    {
        
        int swapped = 0;

        // Compare adjacent elements
        // n-i-1 because the last i elements are already sorted
        for (int j = 0; j < n - i - 1; j++)
        {
            // If current element is greater than next element
            if (arr[j] > arr[j + 1])
            {
                // Swap the two elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                // Put current element at next position
                arr[j + 1] = temp;

                // A swap occurred
                swapped = 1;
            }
        }

        // If no swap happened, array is already sorted
        if (swapped == 0)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {5, 2, 8, 1, 3};

    int n = 5;

    // Sort the array
    bubbleSort(arr, 5);

    // Print sorted array
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
