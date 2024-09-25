#include <stdio.h>

int main(){
	int num1, num2, temp;
	
	printf("Enter number1: ");
	scanf(" %d", &num1);
	
	printf("Enter number2: ");
	scanf(" %d", &num2);
	
	printf("Before Swap: %d and %d", num1, num2);
	
	num1 = num1^num2;
	num2 = num2^num1;
	num1 = num1^num2;
	
	printf("\nAfter Swap: %d and %d", num1, num2);
}