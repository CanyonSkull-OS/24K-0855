#include <stdio.h>

int main(){
	int num;
	
	printf("Enter Number: ");
	scanf(" %d", &num);
	
	if (num > -1){
		if (num > 0)
			printf("Positive\n");
		else
			printf("Zero\n");
	}
	else
		printf("Negative\n");
	
	if (num % 2 == 0)
		printf("Even Number");
	else
		printf("Odd Number");
}