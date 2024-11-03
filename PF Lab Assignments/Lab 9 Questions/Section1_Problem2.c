#include <stdio.h>


int even_or_odd(int);

int main(){
    int num, flag = 0;
    printf("Enter Number: ");
    scanf("%d", &num);

    flag = even_or_odd(num);

    if (flag){
        printf("\n%d is even\n", num);
    }
    else{
        printf("\n%d is odd\n", num);
    }
    return 0;
}



int even_or_odd(int a){
    int flag = 0;
    if (a % 2 == 0){
        flag = 1;
        return flag;
    }
    else {
        return flag;
    }
}