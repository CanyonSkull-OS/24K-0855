#include <stdio.h>


int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        num--;
        printf("[ %d", num);
    }
    else{
        printf("[ %d", num);
    }
    int i = num-1;
    while (i > 0){
        while (i % 2 == 0){
            i--;
        }
        printf(",%d", i);
        i--;
    }
    printf(" ]");

    return 0;
}