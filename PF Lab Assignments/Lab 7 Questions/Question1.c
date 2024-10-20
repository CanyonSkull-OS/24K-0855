#include <stdio.h>

int main(){
    int num_array[9], size, sum = 0;
    size = sizeof(num_array)/sizeof(num_array[0]);
    printf("Enter numbers: \n");
    for (int i = 0; i < size; i++){
        scanf("%d", &num_array[i]);
    }
    for (int i = 0; i < size; i++){
        sum += num_array[i];
    }
    printf("Sum is %d", sum);
    return 0;
}