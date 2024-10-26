#include <stdio.h>


int main(){
    int num, sum=0;
    int matrix[2][3][3];

    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                printf("\nEnter Number at matrix[%d][%d][%d]: \n", i,j,k);
                scanf("%d", &num);
                matrix[i][j][k] = num;
            }
        }
    }

    

    //Displaying matrix
    printf("\n\n");
    printf("Matrix: \n\n");
    for (int i=0;i<2;i++){
        printf("Layer %d: \n", i+1);
        for (int j=0;j<3;j++){
            printf("[ ");
            for(int k=0;k<3;k++){
            printf("%d ", matrix[i][j][k]);
            }
            printf("] ");
            printf("\n");
        }
        printf("\n\n");
    }

    //Sum
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                sum += matrix[i][j][k];
            }
        }
    }
    printf("Sum: %d\n", sum);

    return 0;
}