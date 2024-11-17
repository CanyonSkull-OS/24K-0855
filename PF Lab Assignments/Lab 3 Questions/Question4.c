#include <stdio.h>
int main(){
	int p1 = 118, p2 = 123, Favg;
	float distance = 2414, Fconsumed, Fcost1, Fcost2, TFuel;
	printf("Enter Fuel Average: ");
	scanf("%d", &Favg);
	Fconsumed = distance/Favg;
	Fcost1 = (Fconsumed/2)*p1;
	Fcost2 = (Fconsumed/2)*p2;
	TFuel = Fcost1+Fcost2;
	printf("Fuel consumed: %.2f\nFuel Cost Forward: %.2f\n"
			"FuelCost Backward: %.2f\n"
			"Total Fuel Cost: %.2f", Fconsumed, Fcost1, Fcost2, TFuel);
} 