#include <stdio.h>
#include <stdbool.h>

int main(){
    int range;
    bool prime = true;
    printf("Enter range: ");
    scanf("%d", &range);

    printf("[ 2");
    for (int i = 3; i <= range; i++){
        prime = true;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                prime = false;
            }
        }
        if (prime == true){
            printf(", %d", i);
        }
    }
    printf("]");


    return 0;
}