#include <stdio.h>

int main(){
	int num, count = 0;
	printf("Enter Number: ");
	scanf("%d", &num);
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