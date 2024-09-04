#include <stdio.h>
int main(){
	int principle, time;
	float Irate, Interest;
	
	printf("Enter Principle (Must be between 100-1,000,000): ");
	scanf("%d", &principle);
	
	printf("Enter Interest Rate (Must be between 5-10%): ");
	scanf("%f", &Irate);
	
	printf("Enter Time Period (Must be between 5-10%): ");
	scanf("%d", &time);
	
	Interest = (principle*Irate*time)/100;
	printf("Simple interest: %.2f", Interest);
}