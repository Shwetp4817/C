#include <stdio.h>

int main(){
    int rows = 3, cols = 3;
    int matrix[3][3];

    // Initialize the matrix
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            matrix[i][j] = 0;
        }
    }

    // Print the matrix
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
   return 0;
}