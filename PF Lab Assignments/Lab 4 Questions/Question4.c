/*
 *Name: Omer Shahid
 *Date: 9/9/2024
 *Description: Discount Program
 */
 
 #include <stdio.h>
 
 int main()
 {
	float cost, discount;
	
	printf("Enter Cost: ");
	scanf(" %f", &cost);
	
	if (cost < 2000)
		discount = 0.05 * cost;
	else if (cost >= 2000 && cost <= 4000)
		discount = 0.1 * cost;
	else if (cost > 4000 && cost <= 6000)
		discount = 0.2 * cost;
	else if (cost > 6000)
		discount = 0.35 * cost;
	
	printf("Amount is %.2f \n", cost);
	cost = cost - discount;
	printf("Amount after discount is %.2f \n", cost);
	
 }