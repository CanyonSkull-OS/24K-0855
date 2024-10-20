#include <stdio.h>

int main(){
    int size, sum = 0;
    printf("Enter Size of array: ");
    scanf("%d", &size);
    int num_array[size];
    printf("Enter numbers: \n");
    for (int i = 0; i < size; i++){
        scanf("%d", &num_array[i]);
    }
    for (int i = size-1; i >= 0; i--){
        printf("%d ", num_array[i]);
    }
    return 0;
}