#include <stdio.h>

int main(){
	int num, count = 0, i = 2, prime = 1;
	printf("Enter Number: ");
	scanf("%d", &num);
	
	for (i ; i*i < num; i++){
		if (num % i == 0)
			prime = 0;
	}
	if (prime)
		printf("Number is Prime\n");
	else
		printf("Number is Composite\n");

	while(num != 0){
		num = num / 10;
		count ++;
	}
	if (count > 1)
		printf("Multiple Digit Number");
	else
		printf("Not a Multiple Digit Number");
	return 0;
}