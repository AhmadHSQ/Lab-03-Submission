	#include<stdio.h>
	#include<string.h>
	
	int main(){
		
		char customer_name[50];
		int unit;
		float price_per_unit;
		float bill;
		
		
		printf("\n\nEnter your name: ");
		fgets(customer_name, 50, stdin);
		
		printf("Enter your units consumed: ");
		scanf("%d", &unit);
		
		printf("Enter your price per unit: ");
		scanf("%f", &price_per_unit);
		
		bill = unit * price_per_unit;
		printf("--------------------------------");
		
		printf(" \n\n\t ELECTRICITY BILL \n \n");
		
		printf("--------------------------------");
		
		printf("\n\nCustomer Name: %s", customer_name);
		printf("Units Consumed: %d", unit);
		printf("\nPrice per units : %.2f", price_per_unit);
		printf("\n\n--------------------------------");
		printf("\n\nTotal Bill: %.2f\n", bill);
		
		
		return 0;
		
	}
