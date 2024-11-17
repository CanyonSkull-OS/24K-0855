#include <stdio.h>
#include <stdlib.h>


int recursive_arr(int*, int);

int main(){
    int size;
    printf("Enter Size: ");
    scanf("%d", &size);
    int* array = malloc(sizeof(int)*size);
    printf("Enter Elements: ");
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    recursive_arr(array, size);

    return 0;
}


int recursive_arr(int* arr, int size){
    if (size != 0){
        recursive_arr(arr, size-1);
        printf("%d ", arr[size-1]);
    }
    else{
        return 0;
    }
}
