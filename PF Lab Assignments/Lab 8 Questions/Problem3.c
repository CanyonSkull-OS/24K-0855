#include <stdio.h>
#include <stdbool.h>

int main(){
    int matrix[3][3] = {{1,2,3},{5,4,6},{6,1,7}},
    min_row = 100, max_col = 0;
    bool smallest_in_row = false, 
    largest_in_column = false;

    printf("Matrix: \n");
    for (int i = 0; i < 3; i++){
        printf("[ ");
        for (int j = 0; j < 3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("]");
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (min_row > matrix[i][j]){
                min_row = matrix[i][j];
                max_col = 0;
                for (int k = 0; k < 3;  k++){
                    if (max_col < matrix[k][j]){
                        max_col = matrix[k][j];
                    }
                }                 
            }
        }
        if (max_col == min_row){
            printf("Saddle Value: %d", max_col);
            printf("\n\n");
        }

        min_row = 100;
    }
    

    return 0;
}