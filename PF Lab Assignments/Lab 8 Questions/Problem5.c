#include <stdio.h>

int main(){
    int rows;
    printf("Enter Rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < rows-i+1; j++){
            printf(" ");
        }

        for (int j = i; j >= 0; j--){
            printf("* ");
        }
        printf("\n");
    }

    for (int i = rows-2; i >= 0; i--){
        for (int j = 0; j < rows-i+1; j++){
            printf(" ");
        }

        for (int j = i; j >= 0; j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}