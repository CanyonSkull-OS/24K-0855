#include <stdio.h>

int main(){
    int num;
    printf("Enter Layers: ");
    scanf("%d", &num);


    for (int i = 1;i<=num;i++){
        for (int j=1;j<=num-i+1;j++){
            printf(" ");
        }
        for (int j=1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}