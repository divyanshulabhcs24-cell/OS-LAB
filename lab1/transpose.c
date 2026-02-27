#include <stdlib.h>

int** transpose(int** matrix, int matrixSize, int* matrixColSize, 
                int* returnSize, int** returnColumnSizes) {
    
    int i, j;
    
    int rows = matrixSize;
    int cols = matrixColSize[0];
    
    *returnSize = cols;
    
    *returnColumnSizes = (int*)malloc(cols * sizeof(int));
    
    for(i = 0; i < cols; i++) {
        (*returnColumnSizes)[i] = rows;
    }
    
    int** result = (int**)malloc(cols * sizeof(int*));
    
    for(i = 0; i < cols; i++) {
        result[i] = (int*)malloc(rows * sizeof(int));
    }
    
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
    
    return result;
}
