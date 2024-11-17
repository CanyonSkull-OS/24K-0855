#include <stdio.h>
#include <stdlib.h>

int recursive_linear_search(int*, int, int, int);

int main(){
    int size, target, c_index = 0;
    printf("Enter Size: ");
    scanf(" %d", &size);
    int* arr = malloc(sizeof(char)*size);
    printf("Enter Array Elements: ");
    for (int i = 0; i < size; i++){
        scanf(" %d", &arr[i]);
    }
    printf("Enter target number: ");
    scanf(" %d", &target);
    if (recursive_linear_search(arr,size,target,c_index)){
        printf("%d\n", recursive_linear_search(arr, size, target, c_index));
    }


    return 0;
}


int recursive_linear_search(int* arr, int size,int trgt, int c_index){
    if (arr[c_index] == trgt){
        return c_index+1;
    }
    else if(c_index == size){
        printf("Value not found\n");
        return 0;
    }
    else{
        recursive_linear_search(arr, size, trgt, c_index+1);
    }

}