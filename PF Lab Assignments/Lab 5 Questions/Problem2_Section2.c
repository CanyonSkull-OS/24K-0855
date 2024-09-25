#include <stdio.h>

int main(){
	int age, citizenship;
	
	printf("Enter Age: ");
	scanf(" %d", &age);
	
	printf("Are you a Cistizen? (1 for yes, 0 for no): ");
	scanf(" %d", &citizenship);
	
	age >= 18 && citizenship ? printf("You are eligible to vote: " ) : printf("You are not eligible to vote: " );
}