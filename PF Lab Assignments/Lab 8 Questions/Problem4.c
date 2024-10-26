#include <stdio.h>

int main(){
    int matrix1[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, 
    matrix2[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, 
    matrix3[3][3];
    int sum = 0;


    printf("Matrix1: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d, ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");

    printf("Matrix2: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d, ", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                sum += matrix1[j][k] * matrix2[k][i];
            }
            matrix3[j][i] = sum;
            sum = 0;
        }
    }
    printf("Product Matrix: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d, ", matrix3[i][j]);
        }
        printf("\n");
    }


    return 0;
}