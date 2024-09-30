#include <stdio.h>

int main() {
    	int i = 1, j = 2, terms = 0, result;	
	printf("%d, %d, ", i, j);
	for (i, j; terms < 7; terms++){
		result = i * j;
		i = j;
		j = result;
		printf("%d, ", result);
	}
	return 0;
}