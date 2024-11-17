#include <stdio.h>
int main(){
	float taxrate,paid,salary;
	
	printf("Enter Salary: ");
	scanf("%f", &salary);
	printf("Enter Tax Rate: ");
	scanf("%f", &taxrate);
	paid = taxrate/100;
	paid = paid * salary;
	salary -= paid;
	printf("Need to pay: %.2f \n", paid);
	printf("Remaining Salary: %.2f", salary);
	return 0;
}