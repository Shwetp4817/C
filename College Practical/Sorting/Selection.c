//Find the smallest element and put it at the correct position.

#include <stdio.h>

void selectionSort(int arr[], int n)
{
    // i represents the position where the minimum
    // element should be placed
    for (int i = 0; i < n - 1; i++)
    {
        // Assume current position contains minimum
        int minIndex = i;

        // Search for a smaller element
        for (int j = i + 1; j < n; j++)
        {
            // If a smaller element is found
            if (arr[j] < arr[minIndex])
            {
                // Store its index
                minIndex = j;
            }
        }

        // Swap minimum element with arr[i]
        int temp = arr[i];

        // Put minimum at correct position
        arr[i] = arr[minIndex];

        // Put old arr[i] at minimum's old position
        arr[minIndex] = temp;
    }
}

int main()
{
    int arr[] = {5, 2, 8, 1, 3};

    int n = 5;

    selectionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
