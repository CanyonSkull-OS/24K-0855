/*
 *Name: Omer Shahid
 *Date: 9/9/2024
 *Description: Electricity Bill Program
 */
 
 #include <stdio.h>
 
 int main() {
	 int id, units;
	 float total, charge, surcharge, net_amount;
	 char name[10];
	 
	 printf("Enter ID: ");
	 scanf(" %d", &id);
	
	 printf("Enter Name: ");
	 scanf(" %s", &name);
	 
	 printf("Enter units consumed: ");
	 scanf(" %d", &units);
	 
	if (units < 200){
		 charge = 16.20;
		 total = units * charge; 
	}
	else if (units >= 200 && units < 300){
		 charge = 20.10;
		 total = units * charge;
	}
	else if (units >= 300 && units < 500){
		 charge = 27.10;
		 total = units * charge;
	}
	else {
		 charge = 35.90;
		 total = units * charge;
	}
	
	if (total > 18000)
		 surcharge = 0.15 * total;
	 
	 net_amount = total + surcharge;
	 
	 printf("\nCustomer ID: %d \n", id);
	 printf("Customer Name: %s \n", name);
	 printf("Units Consumed: %d \n", units);
	 printf("Amount Charges @%.2f per unit: %.2f \n", charge, total);
	 printf("Surcharge Amount: %.2f \n", surcharge);
	 printf("Net Amount Paid by the Customer: %.2f \n", net_amount);
	
 }					