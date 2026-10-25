//Radix Sort sorts numbers digit by digit.
//It commonly uses Counting Sort internally.

#include <stdio.h>

void countingSort(int arr[], int n, int exp)
{
    // Output array
    int output[n];

    // Count array for digits 0-9
    int count[10] = {0};

    // Count occurrences of each digit
    for (int i = 0; i < n; i++)
    {
        // Extract current digit
        int digit = (arr[i] / exp) % 10;

        // Increase digit frequency
        count[digit]++;
    }

    // Convert count into cumulative count
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    // Build output array from right to left
    // This keeps the sort stable
    for (int i = n - 1; i >= 0; i--)
    {
        // Extract digit
        int digit = (arr[i] / exp) % 10;

        // Place element at correct position
        output[count[digit] - 1] = arr[i];

        // Decrease position
        count[digit]--;
    }

    // Copy output back to original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n)
{
    // Find maximum number
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Sort by ones, tens, hundreds, etc.
    for (int exp = 1; max / exp > 0; exp *= 10)
    {
        // Sort according to current digit
        countingSort(arr, n, exp);
    }
}

int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};

    int n = 8;

    radixSort(arr, 8);

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
