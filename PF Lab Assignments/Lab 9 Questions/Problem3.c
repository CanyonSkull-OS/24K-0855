#include <stdio.h>

int CheckPrime(int);

int main(){
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);
    if (CheckPrime(number)){
        printf("%d is a prime number\n", number);
    }
    else{
        printf("%d is NOT a prime number\n", number);
    }

    return 0;
}


int CheckPrime(int num){
    int prime = 1;
    for (int i = 2; i < num; i++){
        if (num % i == 0){
            prime = 0;
        }
    }


    return prime;
}