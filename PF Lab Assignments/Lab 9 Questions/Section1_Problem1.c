#include <stdio.h>

int product(int, int);

int main(){
    int a, b;
    printf("Enter Number A: ");
    scanf("%d", &a);
    printf("Enter Number B: ");
    scanf("%d", &b);

    printf("\nProduct of %d and %d is: %d\n", a, b, product(a,b));
    return 0;
}



int product(int a, int b){
    return a*b;
}