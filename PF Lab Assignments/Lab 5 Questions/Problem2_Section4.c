#include <Stdio.h>

int main(){
	int num, ones = 0;
	
	printf("Enter a Number: ");
	scanf("%d", &num);
	
	while (num!=0){
		ones += num & 1;
		num = num >> 1;
	}
	
	printf("Number of 1's is %d", ones);
	return 0;
}