#include <stdio.h>
#include <stdlib.h>

int size;

int* createArr();
void fillArr(int* array, int size);
int calSum(int* array, int size);

int main(){
    int* array = createArr();
    fillArr(array, size);
    printf("Sum of %d Elements: %d", size, calSum(array, size));
    free(array);
    printf("\nMemory of Array freed\n");
    
    return 0;
}


int* createArr(){
    int* array;
    printf("Enter Size: ");
    scanf(" %d", &size);
    array = malloc(sizeof(int)*size);
    printf("\nInteger Array Created\n\n");
    return array;
}

void fillArr(int* array, int size){
    for (int i = 0; i < size; i++){
        printf("Enter Element %d: ", i+1);
        scanf(" %d", &array[i]);
    }
    printf("Array Filled\n");
}

int calSum(int* array, int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}