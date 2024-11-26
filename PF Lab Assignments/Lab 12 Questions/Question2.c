#include <stdio.h>
#include <stdlib.h>

int** create2DArray(int m, int n);
int inputValues(int** array, int m, int n);
void printArray(int** array, int m, int n);
void multiplyMatrices(int** arr1, int** arr2, int m, int n);

int main(){
    int m, n;
    int** array1;
    int** array2;
    printf("Enter Dimension M (Must be greater than N): ");
    scanf(" %d", &m);
    printf("Enter Dimension N: ");
    scanf(" %d", &n);
    array1 = create2DArray(m, n);
    array2 = create2DArray(n, m);
    inputValues(array1, m, n);
    inputValues(array2, n, m);
    printArray(array1, m, n);
    printArray(array2, n, m);
    multiplyMatrices(array1, array2, m, n);

    

    return 0;
}

int** create2DArray(int m, int n){
    int** arr;
    arr = malloc(sizeof(int)*m);
    for (int i = 0; i < m; i++){
        arr[i] = malloc(sizeof(int)*n);
    }
    printf("2DArray Created\n");
    return arr;
}

int inputValues(int** array, int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("Enter Value for Array[%d][%d]: ", 
            i, j);
            scanf(" %d", &array[i][j]);
        }
    }
    printf("\t\t\t\tValues added for Array\n\n");
    return 0;
}

void printArray(int** array, int m, int n){
    for (int i = 0 ; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    printf("\t\t\t\tArray Printed\n\n");
}


void multiplyMatrices(int** arr1, int** arr2, int m, int n){
    int ans = 0, count = 0;
    for (int k = 0; k < m; k++){
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                ans += arr1[k][j] * arr2[j][i];
            }
        if (count == m){
            printf("\n");
            count = 0;
        }
        printf("%d\t", ans);
        ans = 0;
        count++;
        }
    }
    printf("\n");
}