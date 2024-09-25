#include <stdio.h>

int main(){
	int age, income, credit;
	
	printf("Enter Age: ");
	scanf("%d", &age);
	
	printf("Enter Income: ");
	scanf("%d", &income);
	
	printf("Enter Credit Score: ");
	scanf("%d", &credit);
	
	age >= 18 && income >= 100000 && credit >= 700 ? printf("Eligible for loan") : printf("Not Eligible for loan");
	
	return 0;
}