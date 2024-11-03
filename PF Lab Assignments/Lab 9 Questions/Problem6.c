#include <stdio.h>

void MaxMin(int arr[],int size, int result[]);


int main(){
    int size;
    printf("Enter Size of Array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter Array Elements: ");
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    int result[2];  

    MaxMin(arr, size, result);
    printf("Max: %d\n", result[0]);
    printf("Min: %d\n", result[1]);

    return 0;
}


void MaxMin(int arr[],int size, int result[]){
    result[0] = arr[0];
    result[1] = arr[0];
    for (int i = 0; i < size; i++){
        if (result[0] < arr[i]){
            result[0] = arr[i];
        }
    }
    for (int i = 0; i < size; i++){
        if (result[1] > arr[i]){
            result[1] = arr[i];
        }
    }

}