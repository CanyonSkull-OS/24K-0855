#include <stdio.h>

int calculator(int, char, int);

int main(){
    int num1, num2;
    char operator;
    printf("Enter Equation: ");
    scanf("%d %c %d", &num1, &operator, &num2);
    printf("Result: %d", 
    calculator(num1, operator, num2));

    return 0;
}

int calculator(int num1, char operator, int num2){
    int result = 0;
    switch (operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid Operator\n");
            break;
    }
    
    return result;  
}