#include <stdio.h>

int main(){
	int num;
	
	printf("Enter Number: ");
	scanf(" %d", &num);
	
	num > -1 ? num > 0 ? printf("Positive") : printf("Zero") : printf("Negative");
	
}