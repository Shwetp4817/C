// write a program using pointer and function to calculate factorial of a number
#include <stdio.h>
// Function to calculate factorial using pointer
void factorial(int *n, int *result) {
    *result = 1; // Initialize result to 1
    for (int i = 1; i <= *n; i++) {
        *result *= i; // Multiply result by i
    }
}