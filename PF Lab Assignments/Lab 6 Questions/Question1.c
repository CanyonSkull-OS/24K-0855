#include <stdio.h>

int main  (){
	int num=1, total= 0;
	do{
	  printf("Enter Number: ");
	  scanf(" %d", &num);
	  total += num;
	  printf("%d\n", total);
	} while(num != 0);
	return 0;
}