#include <stdio.h>


int main(){
    int num, size;
    printf("Enter Size of Matrix: ");
    scanf("%d", &size);
    int matrix[size][size], transpose[size][size];
    printf("\nEnter Number: \n");

    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            transpose[i][j] = 0;
        }
    }

    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            scanf("%d", &num);
            matrix[i][j] = num;
        }
    }

    

    //Displaying matrix
    printf("\n\n");
    printf("Matrix: \n");
    for (int i=0;i<size;i++){
        printf("[ ");
        for (int j=0;j<size;j++){
            printf("%d ", matrix[i][j]);
        }
        printf("]\n");
    }



    //Transpose
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            transpose[i][j] = matrix[j][i];
        }
    }


    printf("\n\n");
    printf("Tranpose: \n");
    //Displaying Transpose
    for (int i=0;i<size;i++){
        printf("[ ");
        for (int j=0;j<size;j++){
            printf("%d ", transpose[i][j]);
        }
        printf("]\n");
    }

    

    return 0;
}