#include <stdio.h>

void rotate(int** matrix, int matrixSize, int* matrixColSize){
    
    int remainder = matrixSize - 1;
    int temp;

    for (int i = 0; i < matrixSize; i++){
        for (int j = i + 1; j < matrixSize; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    
    for(int i = 0; i < matrixSize / 2; i++)
    {
        for(int j = 0; j < matrixSize; j++)
        {
            temp = matrix[j][remainder];
            matrix[j][remainder] = matrix[j][i];
            matrix[j][i] = temp; 
        }
        remainder--;
    }
}
