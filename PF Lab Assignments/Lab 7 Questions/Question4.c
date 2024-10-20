#include <stdio.h>

int main(){
    int N;
    printf("Array Size = ");
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++){
        printf("Element %d=", i+1);
        scanf("%d", &arr[i]);
    }
    
    int count[N];

    for (int i = 0; i < N; i++){
        count[i] = 0;
    }

    for (int i = 0; i < N; i++){
        count[arr[i]] += 1;
    }

    for (int i = 0; i < N; i++){
        if (count[i] > 1)
            printf("Number %d in array occered more than once\n", i);
    }

    return 0;
}