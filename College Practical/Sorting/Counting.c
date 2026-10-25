///Counting Sort doesn't compare elements.
//It counts how many times each value occurs. 

#include <stdio.h>

void countingSort(int arr[], int n)
{
    // Find maximum value
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Create frequency array
    int count[max + 1];

    // Initialize frequency array with 0
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }

    // Count frequency of every element
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Index for original array
    int index = 0;

    // Traverse count array
    for (int i = 0; i <= max; i++)
    {
        // Put i into array according to its frequency
        while (count[i] > 0)
        {
            arr[index] = i;

            index++;

            count[i]--;
        }
    }
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};

    int n = 7;

    countingSort(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
