#include <stdio.h>


int recursive_sum(int);

int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Sum: %d\n",recursive_sum(num));
    return 0;
}


int recursive_sum(int n){
    if (n > 0){
        return n%10 + recursive_sum(n/10);
    }
    else{
        return n;
    }
}