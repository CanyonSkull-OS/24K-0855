#include <stdio.h>

int main(){
	int n = 65536, count = 1;
	for (n, count; count < 10; count++){
		n = n / count;
		printf("%d, ", n);
	}
	return 0;
}