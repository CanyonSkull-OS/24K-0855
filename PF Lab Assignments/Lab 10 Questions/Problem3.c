#include <Stdio.h>

#define MAX_TEMP 35

int cmp_temp(int temp);

int main(){
    int* temp;
    printf("Enter Temprature: ");
    for (int i = 0; i < 5; i++){
        scanf(" %d", &temp[i]);
    }

    for (int i = 0; i < 5; i++){
        cmp_temp(temp[i]);
    }
    printf("%d ", cmp_temp(0));

    return 0;
}

int cmp_temp(int temp){
    static int count = 0;
    if (temp > MAX_TEMP){
        count++;
    }
    return count;
}

