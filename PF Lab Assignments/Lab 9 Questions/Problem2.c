#include <stdio.h>

int swapIntegers(int, int);

int main(){
    int num1, num2;
    printf("Enter A and B: ");
    scanf("%d %d", &num1, &num2);
    swapIntegers(num1, num2);

    return 0;
}


int swapIntegers(int a, int b){
    printf("Before Swapping: \n"
    "A : %d\n"
    "B : %d\n\n", a, b);
    int temp = b;
    b = a;
    a = temp;
    printf("After Swapping: \n"
    "A : %d\n"
    "B : %d\n\n", a, b);

}