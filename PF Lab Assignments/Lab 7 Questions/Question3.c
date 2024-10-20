#include <stdio.h>

int main(){
    int num_array[] = {4,1,6,8,10,21,8,9,2,6}, min, max, size;
    size = sizeof(num_array)/sizeof(num_array[0]);
    min = num_array[0];
    max = num_array[0];

    for (int i = 0; i < size; i++){
        if (num_array[i] < min)
            min = num_array[i];
        if (num_array[i] > max)
            max = num_array[i];
    }
    printf("Minimun number = %d\n", min);
    printf("Maximum number = %d", max);


    return 0;
}