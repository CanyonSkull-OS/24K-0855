#include <stdio.h>

int main(){
	int num1, num2;
	
	printf("Enter Number 1: ");
	scanf(" %d", &num1);
	
	printf("\nEnter Number 2: ");
	scanf(" %d", &num2);
	
	num1 > num2 ? printf("%d is larger", num1) : printf("%d is larger", num2);
}