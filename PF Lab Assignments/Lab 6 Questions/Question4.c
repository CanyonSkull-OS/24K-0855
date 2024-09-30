#include <stdio.h>

int main(){
	int count = 0;
	printf("1, 2, ");
	for (int i = 1, j = 2; count < 4; count++){
		int sum = i + j;
		i = j;
		j = sum;
		printf("%d, ", sum);
	}
	return 0;
}