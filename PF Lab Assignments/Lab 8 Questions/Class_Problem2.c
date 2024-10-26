#include <stdio.h>

int main(){
    int arr[5][5], k=0;


    for(int i=0; i<4; i++){
        arr[i][0] = 1;
        k ++;
        for(int j=1; j<5;j++){
            arr[i][j] = arr[i][j-1] + k;
        }
    }

    for(int i=0; i<4; i++){
        printf("{");
        for(int j=0; j<5;j++){
            printf("%d,", arr[i][j]);
        }
        printf("}");
        printf("\n");
    }


    return 0;
}