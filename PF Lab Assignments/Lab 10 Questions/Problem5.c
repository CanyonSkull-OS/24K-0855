#include <stdio.h>
#include <stdlib.h>

int* bubbleSort(int arr[], int size);

int main(){
    int size;
    printf("Enter Size: ");
    scanf("%d", &size);
    int* array = malloc(sizeof(int)*size);
    printf("Enter Elements: ");
    for (int i = 0; i < size; i++){
        scanf(" %d", &array[i]);
    }
    
    bubbleSort(array, size);

    printf("\n");
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int* bubbleSort(int arr[], int size){
    if (size == 1){
        return arr;
    }
    for (int i = 0; i < size-1; i++){
        if (arr[i] > arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        }
    }
    bubbleSort(arr, size-1);
}
