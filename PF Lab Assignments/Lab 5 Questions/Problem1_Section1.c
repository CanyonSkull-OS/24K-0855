#include <stdio.h>

int main(){
	int age;
	
	printf("Enter Age: ");
	scanf(" %d", &age);
	
	if (age > 0){
		if (age >= 12){
			if (age >= 18){
				if (age > 30)
					printf("Senior");
				else
					printf("Adult");
				}
			 else
				 printf("Teenager");
			}
		else
			printf("Child");
		}
	else
		printf("Invalid Age");
}

